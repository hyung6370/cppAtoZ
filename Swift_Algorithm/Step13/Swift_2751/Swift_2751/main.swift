//
//  main.swift
//  Swift_2751
//
//  Created by KIM Hyung Jun on 9/22/24.
//

// [정렬] 2751, 수 정렬하기 2

import Foundation

let n = Int(readLine()!)!
var arr: [Int] = []
var answer = ""
for _ in 0..<n {
    arr.append(Int(readLine()!)!)
}

print(arr.sorted().map { String($0) }.joined(separator: "\n"))
