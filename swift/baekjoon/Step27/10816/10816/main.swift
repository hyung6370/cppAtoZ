//
//  main.swift
//  10816
//
//  Created by KIM Hyung Jun on 2/26/24.
//

import Foundation

// 딕셔너리를 사용
let N = Int(readLine()!)!
let a = Dictionary(readLine()!.split(separator: " ").map{ (Int($0)!, 1) }, uniquingKeysWith: +)
let M = Int(readLine()!)!
let b = readLine()!.split(separator: " ").map{ Int($0)! }

for num in b {
    print(a[num, default: 0], terminator: " ")
}


// 딕셔너리 또다른 방법
let n = Int(readLine()!)!
var nArr = readLine()!.split(separator: " ").map{ Int(String($0))! }
let m = Int(readLine()!)!
let mArr = readLine()!.split(separator: " ").map{ Int(String($0))! }

var dict = [Int: Int]()
var result: [Int] = []

nArr.sort()

for i in nArr {
    if dict.keys.contains(i) {
        dict[i]! += 1
    }
    else {
        dict[i] = 1
    }
}

for j in mArr {
    if dict.keys.contains(j) {
        result.append(dict[j]!)
    }
    else {
        result.append(0)
    }
}

print(result.map{ String($0)}.joined(separator: " "))
