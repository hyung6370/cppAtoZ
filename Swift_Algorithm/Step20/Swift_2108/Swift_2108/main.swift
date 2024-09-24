//
//  main.swift
//  Swift_2108
//
//  Created by KIM Hyung Jun on 9/24/24.
//

// [심화 2] 2108, 통계학

import Foundation

let n = Int(readLine()!)!
var nums: [Int] = []

for _ in 0..<n {
    nums.append(Int(readLine()!)!)
}

nums.sort()

func average(_ nums: [Int]) -> Int {
    let avg = Int(round(nums.map { Double($0) }.reduce(0, +) / Double(n)))
    return avg
}

func median(_ nums: [Int]) -> Int {
    return nums[n / 2]
}

func mode(_ nums: [Int]) -> Int {
    let dict = Dictionary(nums.map { ($0, 1) }, uniquingKeysWith: +)
    let maxValues = dict.filter { $0.value == dict.values.max()! }.sorted { $0.key < $1.key }
    if maxValues.count == 1 {
        return maxValues.first!.key
    }
    else {
        return maxValues[1].key
    }
}

func ranges(_ nums: [Int]) -> Int {
    return nums.last! - nums.first!
}

print(Int(average(nums)))
print(median(nums))
print(mode(nums))
print(ranges(nums))
