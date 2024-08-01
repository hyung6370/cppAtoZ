//
//  main.swift
//  Swift_2587
//
//  Created by KIM Hyung Jun on 8/1/24.
//

import Foundation

var arr: [Int] = []

func calAvg(arr: [Int]) -> Int {
    let sum = arr.reduce(0, +)
    return sum / arr.count
}

func calMid(arr: [Int]) -> Int {
    return arr[arr.count / 2]
}

for _ in 0..<5 {
    arr.append(Int(readLine()!)!)
}
arr.sort()
print(calAvg(arr: arr))
print(calMid(arr: arr))


// 간단하게
print(arr.reduce(0, +) / 5)
print(arr.sorted(by: <)[2])
