//
//  main.swift
//  배열의원소만큼추가하기
//
//  Created by KIM Hyung Jun on 11/26/23.
//

import Foundation

func solution(_ arr: [Int]) -> [Int] {
    return arr.flatMap { Array(repeating: $0, count: $0) }
}

