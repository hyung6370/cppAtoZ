//
//  FileIO.swift
//  Swift_2164
//
//  Created by KIM Hyung Jun on 10/9/24.
//

import Foundation

// 라이노, wapas 님의 코드
// bytes 단위로 받아와서 풀이
final class FileIO {
    private var buffer: [UInt8]
    private var index: Int
    
    init(fileHandle: FileHandle = FileHandle.standardInput) {
        buffer = Array(fileHandle.readDataToEndOfFile()) + [UInt8(0)]
        index = 0
    }
    
    @inline(__always) private func read() -> UInt8 {
        defer { index += 1 }
        
        return buffer.withUnsafeBufferPointer { $0[index] }
    }
    
    @inline(__always) func readInt() -> Int {
        var sum = 0
        var now = read()
        var isPositive = true
        
        while now == 10 || now == 32 { now = read() } // 공백과 줄바꿈 무시
        if now == 45 { isPositive.toggle(); now = read() }
        while now >= 48, now <= 57 {
            sum = sum * 10 + Int(now - 48)
            now = read()
        }
        
        return sum * (isPositive ? 1 : -1)
    }
    
    @inline(__always) func readString() -> Int {
        var str = 0
        var now = read()
        
        while now == 10 || now == 32 { now = read() }
        while now != 10 && now != 32 && now != 0 {
            str += Int(now)
            now = read()
        }
        
        return str
    }
}
