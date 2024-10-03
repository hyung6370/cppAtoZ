//
//  main.swift
//  Swift_9063
//
//  Created by KIM Hyung Jun on 10/3/24.
//

// [기하: 직사각형과 삼각형] 9063, 대지

import Foundation

let n = Int(readLine()!)!
var x: [Int] = []
var y: [Int] = []
for _ in 0..<n {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    if input.count == 2 {
        x.append(input[0])
        y.append(input[1])
    }
}

if x.count == 0 || y.count == 0 {
    print("0")
} else {
    print((x.max()! - x.min()!) * (y.max()! - y.min()!))
}
