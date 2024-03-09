//
//  main.swift
//  2470
//
//  Created by KIM Hyung Jun on 3/9/24.
//

import Foundation

let N = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map{ Int($0)! }.sorted()

var left = 0, right = N-1

var answer = abs(arr[left] + arr[right])
var fin = [arr[left], arr[right]]

while (left < right) {
    let leftValue = arr[left]
    let rightValue = arr[right]
    
    let sum = leftValue + rightValue
    
    if (abs(sum) < answer) {
        answer = abs(sum)
        fin = [leftValue, rightValue]
        
        if (answer == 0) {
            break
        }
    }
    
    if (sum < 0) {
        left += 1
    }
    else {
        right -= 1
    }
}

print(fin[0], fin[1])
