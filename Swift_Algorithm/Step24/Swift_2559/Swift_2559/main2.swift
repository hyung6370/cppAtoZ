//
//  main2.swift
//  Swift_2559
//
//  Created by KIM Hyung Jun on 8/6/24.
//

// 슬라이딩 윈도우 사용 버전

import Foundation

let input2 = readLine()!.split(separator: " ").map { Int($0)! }
let n1 = input2[0], k1 = input2[1]
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var prefixSum2 = arr[0..<k1].reduce(0, +) // arr[0]~arr[k-1] 초기합
var result = prefixSum2

for i in 0..<n1-k1 {
    prefixSum2 -= arr[i]
    prefixSum2 += arr[i+k1]
    result = max(result, prefixSum2)
}

print(result)
