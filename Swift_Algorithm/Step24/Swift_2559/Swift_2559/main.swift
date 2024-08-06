//
//  main.swift
//  Swift_2559
//
//  Created by KIM Hyung Jun on 8/6/24.
//

// [누적합] 2559, 수열

// 누적합 사용한 버전

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], k = input[1]
var prefixSum = [0] + readLine()!.split(separator: " ").map { Int($0)! }

for i in 1...n {
    prefixSum[i] += prefixSum[i-1]
}

var answer = Int.min // 처음에는 가장 작은 정수값으로 초기화

for i in 0...n-k {
    answer = max(answer, prefixSum[i+k] - prefixSum[i])
}

print(answer)
