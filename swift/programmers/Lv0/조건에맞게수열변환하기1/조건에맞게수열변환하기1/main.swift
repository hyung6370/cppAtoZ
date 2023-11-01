//
//  main.swift
//  조건에맞게수열변환하기1
//
//  Created by KIM Hyung Jun on 11/1/23.
//

import Foundation

func solution(_ arr: [Int]) -> [Int] {
    
    return arr.map {
        if $0 < 50 && $0 % 2 == 1 {
            return $0 * 2
        }
        else if $0 >= 50 && $0 % 2 == 0 {
            return $0 / 2
        }
        else {
            return $0
        }
    }
    
}

