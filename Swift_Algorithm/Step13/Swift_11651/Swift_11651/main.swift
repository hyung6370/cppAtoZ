//
//  main.swift
//  Swift_11651
//
//  Created by KIM Hyung Jun on 10/5/24.
//

// [정렬] 11651, 좌표 정렬하기 2

import Foundation

let n = Int(readLine()!)!
var points: [(x: Int, y: Int)] = []
for _ in 0..<n {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    points.append((input[0], input[1]))
}

points.sort { $0.y == $1.y ? $0.x < $1.x : $0.y < $1.y }
points.forEach { print($0.x, $0.y) }
