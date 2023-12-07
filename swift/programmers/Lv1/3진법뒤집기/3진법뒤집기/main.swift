//
//  main.swift
//  3진법뒤집기
//
//  Created by KIM Hyung Jun on 12/6/23.
//

import Foundation

func solution(_ n: Int) -> Int {
    let flipToThree = String(n, radix: 3)
    let answer = Int(String(flipToThree.reversed()), radix: 3)!
    
    return answer
}

