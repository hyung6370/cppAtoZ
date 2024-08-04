//
//  main.swift
//  Swift_10773
//
//  Created by KIM Hyung Jun on 8/3/24.
//

import Foundation

let k = Int(readLine()!)!
var stack: [Int] = []

for i in 0..<k {
    let n = Int(readLine()!)!
    if n == 0 {
        stack.removeLast()
    }
    else {
        stack.append(n)
    }
}

print(stack.reduce(0, +))
