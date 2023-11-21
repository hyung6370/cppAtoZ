//
//  main.swift
//  마지막두원소
//
//  Created by KIM Hyung Jun on 11/21/23.
//

import Foundation

func solution(_ num_list: [Int]) -> [Int] {
    let prev = num_list[num_list.count - 2]
    let last = num_list[num_list.count - 1]
    
    return num_list + [last > prev ? last - prev : 2 * last]
}
