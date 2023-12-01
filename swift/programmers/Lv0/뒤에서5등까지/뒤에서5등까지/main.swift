//
//  main.swift
//  뒤에서5등까지
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ num_list: [Int]) -> [Int] {
    num_list.sorted()[0..<5].map { Int($0) }
}

func solution2(_ num_list: [Int]) -> [Int] {
    return Array(num_list.sorted()[..<5])
}
