//
//  main.swift
//  2559
//
//  Created by KIM Hyung Jun on 2/23/24.
//

import Foundation

// 누적 합
let input = readLine()!.split(separator: " ").map{ Int($0)! }
let N = input[0], K = input[1]
var degrees = [0] + readLine()!.split(separator: " ").map { Int($0)! }

for i in 1...N {
    degrees[i] += degrees[i-1]
}

var answer = Int.min

for i in 0...N-K {
    answer = max(answer, degrees[i+K]-degrees[i])
}

print(answer)



// 슬라이딩 윈도우
var prefixSum = degrees[0..<K].reduce(0, +)
var result = prefixSum

for i in 0..<N-K {
    prefixSum -= degrees[i]
    prefixSum += degrees[i+K]
    result = max(result, prefixSum)
}

print(result)
