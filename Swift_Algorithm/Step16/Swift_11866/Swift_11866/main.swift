//
//  main.swift
//  Swift_11866
//
//  Created by KIM Hyung Jun on 10/9/24.
//

// [스택, 큐, 덱] 11866, 요세푸스 문제 0

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], k = input[1]
var queue: Queue = Queue()
var result: [Int] = []

(1...n).forEach { queue.push($0) }

while !queue.isEmpty {
    for _ in 0..<k-1 {
        queue.push(queue.pop()!)
    }
    result.append(queue.pop()!)
}

print("<\(result.map { String($0) }.joined(separator: ", "))>")
