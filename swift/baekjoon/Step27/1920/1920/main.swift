//
//  main.swift
//  1920
//
//  Created by KIM Hyung Jun on 2/7/24.
//

import Foundation

let N = Int(readLine()!)!
var n: Array<Int> = [Int]()
n = readLine()!.split(separator: " ").map(){ Int(String($0))! }
n.sort()

let M = Int(readLine()!)!
var m: Array<Int> = [Int]()
m = readLine()!.split(separator: " ").map(){ Int(String($0))! }

var result = [Int]()

func binarySearch<T: Comparable>(_ arr: [T], target: T) -> Int {
    var low = 0
    var high = arr.count-1
    
    while low <= high {
        let mid = (low + high) / 2
        if arr[mid] == target {
            return 1
        }
        else if arr[mid] < target {
            low = mid + 1
        }
        else {
            high = mid - 1
        }
    }
    return 0
}

for i in 0..<m.count {
    result.append(binarySearch(n, target: m[i]))
}

for i in 0..<result.count {
    print(result[i])
}
