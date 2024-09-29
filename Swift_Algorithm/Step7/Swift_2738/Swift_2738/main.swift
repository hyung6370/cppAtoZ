//
//  main.swift
//  Swift_2738
//
//  Created by KIM Hyung Jun on 9/29/24.
//

// [2차원 배열] 2738, 행렬 덧셈

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], m = input[1]

var matrixA: [[Int]] = []
var matrixB: [[Int]] = []
var answer = [[Int]](repeating: [Int](repeating: 0, count: m), count: n) // 2차원 배열 선언

for _ in 0..<n {
    matrixA.append(readLine()!.split(separator: " ").map { Int($0)! })
}

for _ in 0..<n {
    matrixB.append(readLine()!.split(separator: " ").map { Int($0)! })
}

for y in 0..<n {
    for x in 0..<m {
        answer[y][x] = matrixA[y][x] + matrixB[y][x]
    }
}

for y in 0..<n {
    answer[y].forEach { print($0, terminator: " ") }
    print() // 줄바꿈을 위해
}
