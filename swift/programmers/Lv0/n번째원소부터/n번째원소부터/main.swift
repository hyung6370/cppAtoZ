//
//  main.swift
//  n번째원소부터
//
//  Created by KIM Hyung Jun on 10/23/23.
//

import Foundation

func solution(_ num_list: [Int], _ n: Int) -> [Int] {
    return Array(num_list[(n-1)...])
}
