//
//  main.swift
//  길이에따른연산
//
//  Created by KIM Hyung Jun on 10/24/23.
//

import Foundation

func solution(_ num_list:[Int]) -> Int {
    return num_list.count >= 11 ? num_list.reduce(0, +) : num_list.reduce(1, *)
}


