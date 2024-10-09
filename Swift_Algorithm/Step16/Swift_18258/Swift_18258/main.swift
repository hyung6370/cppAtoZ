//
//  main.swift
//  Swift_18258
//
//  Created by KIM Hyung Jun on 10/9/24.
//

// [스택, 큐, 덱] 18258, 큐 2

import Foundation

let file = FileIO()
let n = file.readInt()
var queue: Queue = Queue()
var answer = ""

for _ in 0..<n {
    let cmd = file.readString()
    switch cmd {
    case 448:
        queue.push(file.readInt())
    case 335:
        answer += "\(queue.pop())\n"
    case 443:
        answer += "\(queue.size)\n"
    case 559:
        answer += "\(queue.empty)\n"
    case 553:
        answer += "\(queue.front)\n"
    case 401:
        answer += "\(queue.back)\n"
    default:
        continue
    }
}

print(answer)
