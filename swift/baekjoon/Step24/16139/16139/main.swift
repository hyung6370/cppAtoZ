//
//  main.swift
//  16139
//
//  Created by KIM Hyung Jun on 3/31/24.
//

import Foundation

let s = ["-"] + readLine()!.map { String($0) }
let q = Int(readLine()!)!
var cache = [[String: Int]](repeating: [:], count: s.count+1)
for i in 1..<s.count {
    cache[i] = cache[i-1]
    cache[i][s[i], default: 0] += 1
}
for _ in 0..<q {
    let input = readLine()!.split(separator: " ")
    let alpha = String(input[0]), l = Int(input[1])!+1, r = Int(input[2])!+1
    print(cache[r][alpha, default: 0] - cache[l-1][alpha, default: 0])
}
