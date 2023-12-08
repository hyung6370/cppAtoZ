//
//  main.swift
//  삼총사
//
//  Created by KIM Hyung Jun on 12/8/23.
//

import Foundation

func solution(_ number: [Int]) -> Int {
    var answer = 0
    
    for i in 0..<number.count {
        for j in i+1..<number.count {
            for z in j+1..<number.count {
                if number[i] + number[j] + number[z] == 0 {
                    answer += 1
                }
            }
        }
    }
    
    return answer
}

