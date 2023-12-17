//
//  main.swift
//  소수찾기
//
//  Created by KIM Hyung Jun on 12/17/23.
//

import Foundation

func solution(_ n: Int) -> Int {
    var ch = Array(repeating: 0, count: n+1)
    var cnt = 0
    
    for i in 2...n {
        if ch[i] == 0 {
            cnt += 1
            for j in stride(from: i, to: n+1, by: i) {
                ch[j] = 1
            }
        }
    }
    
    return cnt
}

