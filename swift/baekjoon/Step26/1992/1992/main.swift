//
//  main.swift
//  1992
//
//  Created by KIM Hyung Jun on 2/25/24.
//

import Foundation

let n = Int(readLine()!)!
var board = [[Int]]()

for _ in 0..<n {
    board.append(readLine()!.map{ Int(String($0))! })
}

var result = ""

func check(_ x: Int, _ y: Int, _ width: Int) -> Bool {
    for i in x..<x+width {
        for j in y..<y+width {
            if board[x][y] != board[i][j] {
                return false
            }
        }
    }
    return true
}

func quadTree(_ x: Int, _ y: Int, _ n: Int) {
    if check(x, y, n) {
        result += "\(board[x][y])"
        return
    }
    
    let w = n / 2
    
    result += "("
    for i in 0..<2 {
        for j in 0..<2 {
            quadTree(x+i*w, y+j*w, w)
        }
    }
    
    result += ")"
}

quadTree(0, 0, n)
print(result)
