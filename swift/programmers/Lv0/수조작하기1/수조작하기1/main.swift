//
//  main.swift
//  수조작하기1
//
//  Created by KIM Hyung Jun on 11/24/23.
//

import Foundation

func solution(_ n: Int, _ control: String) -> Int {
    let op: [Character: Int] = ["w": 1, "s": -1, "d": 10, "a": -10]
    
    return n + control.reduce(0) { $0 + op[$1]! }
}

