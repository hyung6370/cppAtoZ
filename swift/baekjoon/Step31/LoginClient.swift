//
// LoginClient.swift
// glimpese-iOS
//
// Created by 서원진 on 4/5/24.
//

import ComposableArchitecture
import Foundation
import Moya

@DependencyClient
struct LoginClient {
    var login: (_ otpText: String) async throws -> Int
    var logout: () async throws -> Int
    var sendMailCode: (_ email: String) async throws -> Int
}

extension LoginClient: DependencyKey {
    static let liveValue = Self(
        login: { otpText in
            let provider = MoyaProvider<Login.API>(plugins: [MoyaLoggingPlugin()])
            Login.shared.otpText = otpText
            return try await withCheckedThrowingContinuation { continuation in
                provider.request(.login) { result in
                    switch result {
                    case let .success(response):
                        do {
                            let auth = try JSONDecoder().decode(AuthResponse.self, from: response.data)
                            if response.statusCode == 200 {
                                if let headerFields = response.response?.allHeaderFields as? [String: String],
                                   let url = response.request?.url {
                                    let cookies = HTTPCookie.cookies(withResponseHeaderFields: headerFields, for: url)
                                    if !cookies.isEmpty {
                                        for cookie in cookies {
                                            if cookie.name == "accessToken" {
                                                KeychainService.saveToken(cookie.value)
                                                if let savedToken = KeychainService.getToken() {
                                                    print("Found token: \(savedToken)")
                                                    continuation.resume(returning: auth.statusCode)
                                                } else {
                                                    print("Token not found")
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } catch {
                            print("디코딩 실패: \(error)")
                            continuation.resume(throwing: error)
                        }
                    case let .failure(error):
                        continuation.resume(throwing: error)
                    }
                }
            }
        },
        logout: {
            let provider = MoyaProvider<Login.API>(plugins: [MoyaLoggingPlugin()])
            return try await withCheckedThrowingContinuation { continuation in
                provider.request(.logout) { result in
                    switch result {
                    case .success(let response):
                        continuation.resume(returning: response.statusCode)
                    case .failure(let error):
                        print("요청 실패: \(error)")
                        continuation.resume(throwing: error)
                    }
                }
            }
        },
        sendMailCode: { email in
            let provider = MoyaProvider<Login.API>(plugins: [MoyaLoggingPlugin()])
            return try await withCheckedThrowingContinuation { continuation in
                provider.request(.sendMailCode(email: email)) { result in
                    switch result {
                    case .success(let response):
                        if response.statusCode == 200 {
                            print("이메일 코드 전송 성공")
                            Login.shared.email = email
                            continuation.resume(returning: response.statusCode)
                        } else {
                            print("이메일 코드 전송 실패 - 상태 코드: \(response.statusCode)")
                            let error = NSError(domain: "NetworkError", code: response.statusCode, userInfo: nil)
                            continuation.resume(throwing: error)
                        }
                    case .failure(let error):
                        print("요청 실패: \(error)")
                        continuation.resume(throwing: error)
                    }
                }
            }
        }
    )
}
extension DependencyValues {
    var loginClient: LoginClient {
        get { self[LoginClient.self] }
        set { self[LoginClient.self] = newValue }
    }
}
