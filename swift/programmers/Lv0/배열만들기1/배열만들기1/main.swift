//
//  main.swift
//  배열만들기1
//
//  Created by KIM Hyung Jun on 10/25/23.
//

import Foundation

func solution(_ n: Int, _ k: Int) -> [Int] {
    let numbers = Array(1...n) // 1부터 n까지의 수 범위를 생성
    
    let result = numbers.filter { k * $0 < n + 1 }.map { k * $0 }
    
    return result
}

