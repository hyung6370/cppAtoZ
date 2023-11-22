//
//  main.swift
//  조건에맞게수열변환하기3
//
//  Created by KIM Hyung Jun on 11/22/23.
//

import Foundation

func solution(_ arr: [Int], _ k: Int) -> [Int] {
    return arr.map { k % 2 == 1 ? $0 * k : ($0 + k) }
}
