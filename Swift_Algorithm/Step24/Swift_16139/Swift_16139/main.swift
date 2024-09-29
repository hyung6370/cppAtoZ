//
//  main.swift
//  Swift_16139
//
//  Created by KIM Hyung Jun on 9/28/24.
//

// [누적 합] 16139, 인간-컴퓨터 상호작용

import Foundation

let s = ["-"] + readLine()!.map { String($0) } // "abc" -> ["a", "b', "c"]
let q = Int(readLine()!)!
var cache = [[String: Int]](repeating: [:], count: s.count+1)

for i in 1..<s.count {
    cache[i] = cache[i-1]
    cache[i][s[i], default: 0] += 1
}

for _ in 0..<q {
    let input = readLine()!.split(separator: " ")
    let a = String(input[0]), l = Int(input[1])!+1, r = Int(input[2])!+1
    
    print(cache[r][a, default: 0] - cache[l-1][a, default: 0])
}
