//
//  main.swift
//  약수의합
//
//  Created by KIM Hyung Jun on 11/2/23.
//

import Foundation

func solution(_ n: Int) -> Int {
    var result = 0
    for i in 1..<n+1 {
        if n % i == 0 {
            result += i
        }
    }
    return result
}

func solution2(_ n: Int) -> Int {
    guard n != 0 else {
        return 0
    }
    
    return Array(1...n).filter { n % $0 == 0 }.reduce(0, +)
}

