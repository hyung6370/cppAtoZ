//
//  main.swift
//  Swift_15649
//
//  Created by KIM Hyung Jun on 7/21/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let N = input[0], M = input[1]
var visited = [Bool](repeating: false, count: N+1) // 이미 뽑은 수는 제외하기 위해

func dfs(nums: [Int]) {
    if nums.count == M {
        nums.forEach { print($0, terminator: " ") }
        print()
        return
    }
    
    for i in 1...N {
        if !visited[i] {
            visited[i] = true
            dfs(nums: nums+[i])
            visited[i] = false
        }
    }
}

dfs(nums: [])
