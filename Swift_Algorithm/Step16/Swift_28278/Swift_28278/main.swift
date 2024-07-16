//
//  main.swift
//  Swift_28278
//
//  Created by KIM Hyung Jun on 7/16/24.
//

import Foundation

let N = Int(readLine()!)!
var stack: [Int] = []

for _ in 0..<N {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let command = input.first!
    
    switch command {
    case 1:
        let n = input.last!
        stack.append(n)
    case 2:
        print(stack.popLast() ?? -1)
    case 3:
        print(stack.count)
    case 4:
        print(stack.isEmpty ? 1 : 0)
    case 5:
        print(stack.last ?? -1)
    default: fatalError()
    }
}

