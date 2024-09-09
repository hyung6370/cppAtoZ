//
//  main.swift
//  Swift_3003
//
//  Created by KIM Hyung Jun on 9/9/24.
//

import Foundation

let chess: [Int] = [1, 1, 2, 2, 2, 8]
let input = readLine()!.split(separator: " ").map { Int($0)! }
var result = [Int]()

for i in 0..<chess.count {
    result.append(chess[i] - input[i])
}

for value in result {
    print(value, terminator: " ")
}
