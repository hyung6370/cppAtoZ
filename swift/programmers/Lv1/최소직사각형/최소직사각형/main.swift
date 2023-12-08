//
//  main.swift
//  최소직사각형
//
//  Created by KIM Hyung Jun on 12/8/23.
//

import Foundation

func solution(_ sizes: [[Int]]) -> Int {
    var maxNum = 0
    var minNum = 0
    
    for size in sizes {
        maxNum = max(maxNum, size.max()!)
        minNum = max(minNum, size.min()!)
    }
    
    return maxNum * minNum
}

