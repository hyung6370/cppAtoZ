//
//  main.swift
//  Swift_1934
//
//  Created by KIM Hyung Jun on 7/16/24.
//

import Foundation

func gcd(_ a: Int, _ b: Int) -> Int {
    if b == 0 { return a }
    return gcd(b, a % b)
}

func solution() {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let a = input[0], b = input[1]
    print(a * b / gcd(a, b))
}

let T = Int(readLine()!)!

for _ in 0..<T { solution() }
