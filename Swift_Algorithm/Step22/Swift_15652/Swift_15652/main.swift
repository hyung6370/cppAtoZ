//
//  main.swift
//  Swift_15652
//
//  Created by KIM Hyung Jun on 9/26/24.
//

// [백트래킹] 15652, N과 M (4)

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], m = input[1]

var result = ""

func dfs(nums: [Int], index: Int) {
    if nums.count == m {
        result += nums.map { String($0) }.joined(separator: " ") + "\n"
        return
    }
    
    for i in index...n {
        dfs(nums: nums+[i], index: i)
    }
}

dfs(nums: [], index: 1)
print(result)
