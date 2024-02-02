//
//  main.swift
//  15649
//
//  Created by KIM Hyung Jun on 2/2/24.
//

import Foundation

let nums = readLine()!.split(separator: " ").map { Int(String($0))! }
let N = nums[0]
let M = nums[1]

var result = [Int]()

backTracking()

func backTracking() {
    if result.count == M {
        print(result.map{ String($0)}.joined(separator: " "))
        return
    }
    
    for i in 1...N {
        if !result.contains(i) {
            result.append(i)
            backTracking()
            result.popLast()!
        }
    }
}
