//
//  main.swift
//  1806
//
//  Created by KIM Hyung Jun on 4/12/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], s = input[1]
let nums = readLine()!.split(separator: " ").map { Int($0)! }

var left = 0
var right = 0
var sum = 0
var answer = n+1

while left <= right && right < n {
    if sum < s {
        sum += nums[right]
        right += 1
    }
    else {
        answer = min(answer, right-left)
        sum -= nums[left]
        left += 1
    }
}

print(answer == n+1 ? 0 : answer)
