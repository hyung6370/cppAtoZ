//
//  main.swift
//  Swift_2346
//
//  Created by Hyungjun KIM on 10/10/24.
//

// [스택, 큐, 덱] 2346, 풍선 터뜨리기

import Foundation

let n = Int(readLine()!)!
var balloons = readLine()!.split(separator: " ").enumerated().map { ($0 + 1, Int(String($1))!) }
var dq = Deque(enqueue: balloons)
var result: [Int] = []
var currentIndex = 0

while !dq.isEmpty {
    let current = dq.popFront()!
    result.append(current.0)
    var steps = current.1
    
    if steps > 0 {
        steps -= 1
    }
    
    if steps > 0 {
        for _ in 0..<steps {
            if let balloon = dq.popFront() {
                dq.pushRear(balloon)
            }
        }
    } else {
        for _ in 0..<abs(steps) {
            if let balloon = dq.popRear() {
                dq.pushFront(balloon)
            }
        }
    }
}

print(result.map { String($0) }.joined(separator: " "))
