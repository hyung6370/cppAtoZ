//
//  main.swift
//  Swift_10101
//
//  Created by KIM Hyung Jun on 10/3/24.
//

// [기하: 직사각형과 삼각형] 10101, 삼각형 외우기

import Foundation

var angles: [Int] = []

for _ in 0..<3 {
    angles.append(Int(readLine()!)!)
}

if angles.reduce(0, +) == 180 {
    let c = Set(angles).count
    c == 1 ? print("Equilateral") : c == 2 ? print("Isosceles") : print("Scalene")
} else {
    print("Error")
}
