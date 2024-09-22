//
//  main.swift
//  Swift_2485
//
//  Created by KIM Hyung Jun on 9/22/24.
//

// [약수, 배수와 소수] 2485, 가로수

import Foundation

func gcd(_ a: Int, _ b: Int) -> Int {
    if b == 0 { return a }
    return gcd(b, a % b)
}

let n = Int(readLine()!)!
var pos: [Int] = []

for _ in 0..<n {
    pos.append(Int(readLine()!)!)
}

pos.sort()

var mid = 0

for i in 0..<n-1 {
    mid = gcd(mid, pos[i+1]-pos[i])
}

print((pos.last! - pos.first!) / mid - n + 1)
