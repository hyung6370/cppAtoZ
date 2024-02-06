//
//  main.swift
//  2630
//
//  Created by KIM Hyung Jun on 2/6/24.
//

import Foundation

let N = Int(readLine()!)!
var paper: [[Int]] = []
for _ in 0..<N {
    paper.append(readLine()!.split(separator: " ").map { Int($0)! })
}

var whiteCount = 0
var blueCount = 0

func traversal(y: Int, x: Int, N: Int) {
    var white = 0
    var blue = 0
    
    for y in y..<y+N {
        for x in x..<x+N {
            if paper[y][x] == 0 {
                white += 1
            }
            else {
                blue += 1
            }
        }
    }
    
    if white == N * N {
        whiteCount += 1
        return
    }
    
    if blue == N * N {
        blueCount += 1
        return
    }
    
    traversal(y: y, x: x, N: N/2)
    traversal(y: y, x: x+N/2, N: N/2)
    traversal(y: y+N/2, x: x, N: N/2)
    traversal(y: y+N/2, x: x+N/2, N: N/2)
}

traversal(y: 0, x: 0, N: N)

print(whiteCount)
print(blueCount)
