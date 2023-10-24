//
//  main.swift
//  n보다커질때까지더하기
//
//  Created by KIM Hyung Jun on 10/23/23.
//

import Foundation

func solution(_ numbers: [Int], _ n: Int) -> Int {
//    var sum: Int = 0
//    var i: Int = 0
//    
//    while(true) {
//        if sum > n {
//            return sum
//        }
//        sum += numbers[i]
//        i += 1
//    }
//    return sum
    
    return numbers.reduce(0) { $0 > n ? $0 : $0 + $1 }
}

