//
//  main.swift
//  Swift_15651
//
//  Created by KIM Hyung Jun on 8/22/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], m = input[1]

var result = ""

func dfs(nums: [Int]) {
    if nums.count == m {
        result += nums.map { String($0) }.joined(separator: " ") + "\n"
        return
    }
        
    for i in 1...n {
        dfs(nums: nums+[i])
    }
}

dfs(nums: [])
print(result)
