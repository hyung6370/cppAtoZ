//
//  main.swift
//  Swift_11659
//
//  Created by KIM Hyung Jun on 7/23/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], m = input[1]
var ns = [0] + readLine()!.split(separator: " ").map { Int($0)! }

for i in 1...n {
    ns[i] += ns[i-1]
}

for _ in 0..<m {
    let input2 = readLine()!.split(separator: " ").map { Int($0)! }
    let i = input2[0], j = input2[1]
    
    print(ns[j] - ns[i-1])
}

