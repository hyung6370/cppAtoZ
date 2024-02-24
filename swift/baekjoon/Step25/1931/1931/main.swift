//
//  main.swift
//  1931
//
//  Created by KIM Hyung Jun on 2/24/24.
//

import Foundation

let N = Int(readLine()!)!
var times: [(start: Int, end: Int)] = []

for _ in 0..<N {
    let input = readLine()!.split(separator: " ").map{ Int($0)! }
    let start = input[0], end = input[1]
    times.append((start, end))
}

times.sort { $0.1 == $1.1 ? $0.0 < $1.0 : $0.1 < $1.1 }

var endPoint = 0
var res = 0

for time in times {
    if time.start >= endPoint {
        endPoint = time.end
        res += 1
    }
}

print(res)
