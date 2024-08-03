//
//  main.swift
//  Swift_13241
//
//  Created by KIM Hyung Jun on 8/3/24.
//

import Foundation

func gcd(_ a: Int, _ b: Int) -> Int {
    if b == 0 { return a }
    return gcd(b, a % b)
}

let input = readLine()!.split(separator: " ").map { Int($0)! }
let a = input[0], b = input[1]

print(a*b / gcd(a,b))
