//
//  main.swift
//  덧칠하기
//
//  Created by KIM Hyung Jun on 12/27/23.
//

import Foundation

func solution(_ n: Int, _ m: Int, _ section: [Int]) -> Int {
    var notPainted = section
    var end = 0
    var cnt = 0
    
    while !notPainted.isEmpty {
        var area = notPainted.removeFirst()
        
        if end >= area {
            continue
        }
        else {
            end = area + m - 1
            cnt += 1
        }
    }
    
    return cnt
}

