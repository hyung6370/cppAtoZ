//
//  main.swift
//  Swift_1992
//
//  Created by KIM Hyung Jun on 8/7/24.
//

// [Devide Conquer], 1992 쿼드트리

import Foundation

let n = Int(readLine()!)!
var media: [[Character]] = []

for _ in 0..<n {
    media.append(readLine()!.map { $0 })
}

var answer = ""

func compression(y: Int, x: Int, n: Int) {
    var zeroCnt = 0
    var oneCnt = 0
    
    for y in y..<y+n {
        for x in x..<x+n {
            if media[y][x] == "0" {
                zeroCnt += 1
            }
            else {
                oneCnt += 1
            }
        }
    }
    
    if zeroCnt == n*n {
        answer += "0"
        return
    }
    
    if oneCnt == n*n {
        answer += "1"
        return
    }
    
    answer += "("
    compression(y: y, x: x, n: n/2)
    compression(y: y, x: x+n/2, n: n/2)
    compression(y: y+n/2, x: x, n: n/2)
    compression(y: y+n/2, x: x+n/2, n: n/2)
    answer += ")"
}

compression(y: 0, x: 0, n: n)
print(answer)
