//
//  FileIO.swift
//  Swift_2346
//
//  Created by Hyungjun KIM on 10/10/24.
//

import Foundation

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
        
        while now == 10 || now == 32 { now = read() }
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
