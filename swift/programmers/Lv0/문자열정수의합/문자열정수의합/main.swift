//
//  main.swift
//  문자열정수의합
//
//  Created by KIM Hyung Jun on 11/28/23.
//

import Foundation

func solution(_ a: String) -> Int {
    a.reduce(0) { $0 + Int(String($1))! }
}

func solution2(_ num_str: String) -> Int {
    return num_str.compactMap { Int(String($0)) }.reduce(0, +)
}
