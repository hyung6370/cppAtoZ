//
//  main.swift
//  홀수vs짝수
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ num_list: [Int]) -> Int {
    var oddSum = 0
    var evenSum = 0
    
    for i in 0..<num_list.count {
        if i % 2 == 0 {
            evenSum += num_list[i]
        }
        else {
            oddSum += num_list[i]
        }
    }
    
    return oddSum > evenSum ? oddSum : evenSum
}

