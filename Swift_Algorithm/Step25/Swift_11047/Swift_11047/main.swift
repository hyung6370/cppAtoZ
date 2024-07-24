//
//  main.swift
//  Swift_11047
//
//  Created by KIM Hyung Jun on 7/24/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0]
var k = input[1]
var coins: [Int] = []
var answer = 0

for _ in 0..<n {
    coins.append(Int(readLine()!)!)
}

for coin in coins.reversed() {
    answer += k/coin
    k %= coin
}

print(answer)
