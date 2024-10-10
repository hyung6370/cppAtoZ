//
//  main.swift
//  Swift_24511
//
//  Created by Hyungjun KIM on 10/10/24.
//

// [스택, 큐, 덱] 24511, queuestack

import Foundation

let n = Int(readLine()!)!
let type = readLine()!.split(separator: " ").map { Int($0)! }
let firstElement = readLine()!.split(separator: " ").map { Int($0)! }
let count = Int(readLine()!)!
var input = Array(readLine()!.split(separator: " ").map { Int($0)! }.reversed())

var tmpQueue: [Int] = []
for i in 0..<n {
    if type[i] == 0 {
        tmpQueue.append(firstElement[i])
    }
}

var result: [Int] = []
for _ in 0..<count {
    result.append(tmpQueue.popLast() ?? input.removeLast())
}

print(result.map({ String($0) }).joined(separator: " "))
