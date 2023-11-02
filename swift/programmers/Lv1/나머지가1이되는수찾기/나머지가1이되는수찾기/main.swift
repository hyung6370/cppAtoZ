//
//  main.swift
//  나머지가1이되는수찾기
//
//  Created by KIM Hyung Jun on 11/2/23.
//

import Foundation

func solution(_ n: Int) -> Int {
    var count = 1
    while true {
        if (n % count) == 1 {
            break
        }
        count += 1
    }
    
    return count
}

