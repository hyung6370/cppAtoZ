//
//  main.swift
//  이어붙인수
//
//  Created by KIM Hyung Jun on 11/23/23.
//

import Foundation

func solution(_ num_list: [Int]) -> Int {
    let even = Int(num_list.filter { $0 % 2 == 0 }.map { String($0) }.joined())!
    let odd = Int(num_list.filter { $0 % 2 == 1 }.map { String($0) }.joined())!
    
    return even + odd
}
