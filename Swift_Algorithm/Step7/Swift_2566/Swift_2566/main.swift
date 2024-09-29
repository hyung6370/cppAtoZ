//
//  main.swift
//  Swift_2566
//
//  Created by KIM Hyung Jun on 9/29/24.
//

// [2차원 배열] 2566, 최댓값

import Foundation

var matrix: [[Int]] = []

for _ in 0..<9 {
    matrix.append(readLine()!.split(separator: " ").map { Int($0)! })
}

let maxValue = matrix.flatMap { $0 }.max()!

for y in 0..<9 {
    for x in 0..<9 {
        if matrix[y][x] == maxValue {
            print(maxValue)
            print(y+1, x+1)
            break
        }
    }
}
