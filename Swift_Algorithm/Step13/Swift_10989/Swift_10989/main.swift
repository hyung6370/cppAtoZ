//
//  main.swift
//  Swift_10989
//
//  Created by KIM Hyung Jun on 10/5/24.
//

import Foundation

let n = Int(readLine()!)!
var arr: [Int] = [Int](repeating: 0, count: 10001)
for _ in 0..<n {
    arr[Int(readLine()!)!] += 1
}

var result = ""

for i in 1...10000 {
    result += String(repeating: "\(i)\n", count: arr[i])
}

print(result)
