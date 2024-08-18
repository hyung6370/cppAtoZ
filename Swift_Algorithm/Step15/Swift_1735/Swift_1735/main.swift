//
//  main.swift
//  Swift_1735
//
//  Created by KIM Hyung Jun on 8/18/24.
//

import Foundation

func gcd(_ x: Int, _ y: Int) -> Int {
    if y == 0 {
        return x
    }
    return gcd(y, x % y)
}

let input1 = readLine()!.split(separator: " ").map { Int($0)! }
let t1 = input1[0], b1 = input1[1]
let input2 = readLine()!.split(separator: " ").map { Int($0)! }
let t2 = input2[0], b2 = input2[1]

let b = b1 * b2
let t = t1 * b2 + t2 * b1

let div = gcd(t, b)
print(t / div, b / div)
