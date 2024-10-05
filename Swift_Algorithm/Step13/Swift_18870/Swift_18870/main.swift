//
//  main.swift
//  Swift_18870
//
//  Created by KIM Hyung Jun on 10/5/24.
//

// [정렬] 18870, 좌표 압축

import Foundation

let n = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let setArr = Array(Set(arr)).sorted()
var dict: [Int: Int] = [:]

for (index, arr) in setArr.enumerated() {
    dict[arr] = index
}

for i in arr {
    print(dict[i]!, terminator: " ")
}
