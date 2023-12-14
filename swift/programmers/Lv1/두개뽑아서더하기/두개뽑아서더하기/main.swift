//
//  main.swift
//  두개뽑아서더하기
//
//  Created by KIM Hyung Jun on 12/14/23.
//

import Foundation

func solution(_ numbers: [Int]) -> [Int] {
    var result = [Int]()
    
    for i in 0..<numbers.count {
        for j in i+1..<numbers.count {
            let num = numbers[i] + numbers[j]
            if !result.contains(num) {
                result.append(num)
            }
        }
    }
    
    return result.sorted()
}

