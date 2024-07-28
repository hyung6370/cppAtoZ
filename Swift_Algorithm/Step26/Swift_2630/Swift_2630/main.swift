//
//  main.swift
//  Swift_2630
//
//  Created by KIM Hyung Jun on 7/28/24.
//

import Foundation

let n = Int(readLine()!)!
var paper: [[Int]] = []
for _ in 0..<n {
    paper.append(readLine()!.split(separator: " ").map { Int($0)! })
}

var whiteCount = 0
var blueCount = 0

func traversal(y: Int, x: Int, n: Int) {
    var white = 0
    var blue = 0
    
    for y in y..<y+n {
        for x in x..<x+n {
            if paper[y][x] == 0 {
                white += 1
            }
            else {
                blue += 1
            }
        }
    }
    
    if white == n * n {
        whiteCount += 1
        return
    }
    
    if blue == n * n {
        blueCount += 1
        return
    }
    
    traversal(y: y, x: x, n: n/2)
    traversal(y: y, x: x+n/2, n: n/2)
    traversal(y: y+n/2, x: x, n: n/2)
    traversal(y: y+n/2, x: x+n/2, n: n/2)
}

traversal(y: 0, x: 0, n: n)

print(whiteCount)
print(blueCount)
