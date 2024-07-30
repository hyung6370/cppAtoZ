//
//  main.swift
//  Swift_1920
//
//  Created by KIM Hyung Jun on 7/30/24.
//

import Foundation

let n = Int(readLine()!)!
var arr: [Int] = []
arr = readLine()!.split(separator: " ").map { Int($0)! }.sorted()

let m = Int(readLine()!)!
var targets: [Int] = []
targets = readLine()!.split(separator: " ").map { Int($0)! }

func binarySearch(arr: [Int], target: Int, start: Int, end: Int) -> Int {
    var start = start
    var end = end
    
    while start <= end {
        let mid = (start + end) / 2
        
        if arr[mid] == target {
            return 1
        }
        else if arr[mid] > target {
            end = mid - 1
        }
        else {
            start = mid + 1
        }
    }
    
    return 0
}

for i in 0..<m {
    let result = binarySearch(arr: arr, target: targets[i], start: 0, end: n-1)
    print(result)
}

// contains() 함수를 쓰면 간단하게 할 수 있다..
for target in targets {
    print(arr.contains(target) ? 1 : 0)
}
