//
//  main.swift
//  원소들의곱과합
//
//  Created by KIM Hyung Jun on 10/24/23.
//

import Foundation

func solution(_ num_list: [Int]) -> Int {
    return num_list.reduce(1, *) < Int(pow(Double(num_list.reduce(0, +)), 2)) ? 1 : 0
}

