//
//  main.swift
//  Swift_2164
//
//  Created by KIM Hyung Jun on 10/9/24.
//

// [스택, 큐, 덱] 2164, 카드 2

import Foundation

let file = FileIO()
let n = file.readInt()
var queue: Queue = Queue()

for i in 1...n {
    queue.push(i)
}

while queue.size != 1 {
    queue.pop()
    let front = queue.pop()
    queue.push(front)
}

print(queue.front)
