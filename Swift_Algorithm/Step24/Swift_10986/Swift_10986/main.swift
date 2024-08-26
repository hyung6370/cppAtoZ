//
//  main.swift
//  Swift_10986
//
//  Created by KIM Hyung Jun on 8/26/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], m = input[1]
let a = readLine()!.split(separator: " ").map { Int($0)! }

var prefixSums = [Int](repeating: 0, count: n+1)
var remainderCount = [Int](repeating: 0, count: m)
var result = 0

for i in 1...n {
    prefixSums[i] = prefixSums[i-1] + a[i-1]
}

for i in 1...n {
    let remainder = (prefixSums[i] % m + m) % m
    
    if remainder == 0 {
        result += 1
    }
    result += remainderCount[remainder]
    remainderCount[remainder] += 1
}

print(result)
