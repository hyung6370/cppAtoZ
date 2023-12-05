//
//  main.swift
//  행렬의덧셈
//
//  Created by KIM Hyung Jun on 12/5/23.
//

import Foundation

func solution(_ arr1: [[Int]], _ arr2: [[Int]]) -> [[Int]] {
    return zip(arr1, arr2).map { zip($0, $1).map { $0 + $1 } }
}

