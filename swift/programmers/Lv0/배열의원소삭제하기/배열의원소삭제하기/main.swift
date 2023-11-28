//
//  main.swift
//  배열의원소삭제하기
//
//  Created by KIM Hyung Jun on 11/28/23.
//

import Foundation

func solution(_ arr: [Int], _ b: [Int]) -> [Int] {
    return arr.filter { !b.contains($0) }
}

