//
//  main.swift
//  1780
//
//  Created by KIM Hyung Jun on 4/2/24.
//

import Foundation

var arr: [[Int]] = []
var count = [0, 0, 0]

func paper(_ r: Int, _ c: Int, _ n: Int) {
    let pivot = arr[r][c]
    var flag = false
    
    if n == 1 {
        count[pivot-2] += 1
        return
    }
    
    for i in r..<r+n {
        for j in c..<c+n {
            if arr[i][j] != pivot {
                for y in stride(from: r, to: r+n, by: n/3) {
                    for x in stride(from: c, to: c+n, by: n/3) {
                        paper(y, x, n/3)
                    }
                }
                flag = true
                break
            }
        }
        if !flag {
            count[pivot-2] += 1
        }
    }
}

if let N = readLine().flatMap({ Int($0) }) {
    arr = (0..<N).compactMap { _ in readLine()?.split(separator: " ").compactMap({ Int($0) }) }
    paper(0, 0, N)
    count.forEach { print($0) }
}

