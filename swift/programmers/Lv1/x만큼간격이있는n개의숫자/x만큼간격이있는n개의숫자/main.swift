//
//  main.swift
//  x만큼간격이있는n개의숫자
//
//  Created by KIM Hyung Jun on 11/2/23.
//

import Foundation

func solution(_ x: Int, _ n: Int) -> [Int64] {
    return Array(1...n).map { Int64($0 * x) }
}

