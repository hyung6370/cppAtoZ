//
//  main.swift
//  9663
//
//  Created by KIM Hyung Jun on 2/22/24.
//

import Foundation

let N = Int(readLine()!)!
var cols = Array(repeating: false, count: N)
var diagonal1 = Array(repeating: false, count: 2*N-1)
var diagonal2 = Array(repeating: false, count: 2*N-1)
var ans = 0

func check(i: Int, k: Int) -> Bool {
    if cols[k] || diagonal1[i+k] || diagonal2[i-k+N-1] {
        return false
    }
    else {
        return true
    }
}

func backTracking(row: Int) {
    if row == N {
        ans += 1
        return
    }
    
    for col in 0..<N {
        if check(i: row, k: col) {
            cols[col] = true; diagonal1[row+col] = true; diagonal2[row-col+N-1] = true
            backTracking(row: row+1)
            cols[col] = false; diagonal1[row+col] = false; diagonal2[row-col+N-1] = false
        }
    }
}

backTracking(row: 0)
print(ans)
