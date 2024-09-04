//
//  main.swift
//  Swift_1654
//
//  Created by KIM Hyung Jun on 9/4/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let k = input[0], n = input[1]
var lan: [Int] = []

for _ in 0..<k {
    lan.append(Int(readLine()!)!)
}

func condition(cut: Int) -> Bool {
    let count = lan.map { $0 / cut }.reduce(0, +)
    return count >= n
}

func binarySearch() -> Int {
    var start = 1
    var end = lan.max()!
    
    while start <= end {
        let mid = (start + end) / 2
        
        if condition(cut: mid) {
            start = mid + 1
        }
        else {
            end = mid - 1
        }
    }
    
    return end
}

print(binarySearch())
