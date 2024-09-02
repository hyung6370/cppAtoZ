//
//  main.swift
//  Swift_11399
//
//  Created by KIM Hyung Jun on 8/27/24.
//

import Foundation

let n = Int(readLine()!)!
let input = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
var prefixSum = [Int](repeating: 0, count: input.count)

prefixSum[0] = input[0]

for i in 1..<input.count {
    prefixSum[i] = prefixSum[i-1] + input[i]
}

print(prefixSum.reduce(0, +))

