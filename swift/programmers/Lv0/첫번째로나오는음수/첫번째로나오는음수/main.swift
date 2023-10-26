//
//  main.swift
//  첫번째로나오는음수
//
//  Created by KIM Hyung Jun on 10/27/23.
//

import Foundation

func solution(_ num_list: [Int]) -> Int {
    return num_list.firstIndex(where: { $0 < 0 }) ?? -1
}

