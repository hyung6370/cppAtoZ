//
//  main.swift
//  Swift_28279
//
//  Created by KIM Hyung Jun on 10/9/24.
//

// [스택, 큐, 덱] 28279, 덱 2

import Foundation

let file = FileIO()
let n = file.readInt()
var dq = Deque(enqueue: [Int]())

for _ in 0..<n {
    let cmd = file.readInt()
    
    switch cmd {
    case 1:
        let element = file.readInt()
        dq.pushFront(element)
    case 2:
        let element = file.readInt()
        dq.pushRear(element)
    case 3:
        if let popFirst = dq.popFront() {
            print(popFirst)
        } else {
            print(-1)
        }
    case 4:
        if let popLast = dq.popRear() {
            print(popLast)
        } else {
            print(-1)
        }
    case 5:
        print(dq.count)
    case 6:
        print(dq.isEmpty ? 1 : 0)
    case 7:
        if let first = dq.first() {
            print(first)
        } else {
            print(-1)
        }
    case 8:
        if let last = dq.last() {
            print(last)
        } else {
            print(-1)
        }
    default: continue
    }
}

