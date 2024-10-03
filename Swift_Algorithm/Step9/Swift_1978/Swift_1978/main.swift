//
//  main.swift
//  Swift_1978
//
//  Created by KIM Hyung Jun on 10/3/24.
//

// [약수, 배수와 소수] 1978, 소수 찾기

import Foundation

func isPrimeNum(_ n: Int) -> Bool {
    if n < 2 { return false }
    let sqrtN = Int(sqrt(Double(n)))
    if sqrtN < 2 { return true }
    for i in 2...sqrtN {
        if n % i == 0 { return false }
    }
    return true
}

if let n = Int(readLine()!), let arr = readLine()?.split(separator: " ").map({ Int($0)! }) {
    var count: Int = 0
    
    for i in arr {
        if isPrimeNum(i) {
            count += 1
        }
    }
    
    print(count)
}
