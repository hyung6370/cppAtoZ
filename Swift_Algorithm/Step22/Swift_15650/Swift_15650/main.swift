//
//  main.swift
//  Swift_15650
//
//  Created by KIM Hyung Jun on 8/5/24.
//

// 15650번, N과 M(2)

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], m = input[1]

func dfs(nums: [Int], index: Int) {
    if nums.count == m {
        nums.forEach { print($0, terminator: " ") }
        print()
        return
    }
    if index > n { return }
    
    for i in index...n {
        dfs(nums: nums+[i], index: i+1)
    }
}

dfs(nums: [], index: 1)
