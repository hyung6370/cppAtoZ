//
//  main.swift
//  약수의개수와덧셈
//
//  Created by KIM Hyung Jun on 12/2/23.
//

import Foundation

func solution(_ left: Int, _ right: Int) -> Int {
    return (left...right).map { i in (1...i).filter { i % $0 == 0 }.count % 2 == 0 ? i : -i }.reduce(0, +)
}

func solution2(_ left: Int, _ right: Int) -> Int {
    var answer = 0
    
    for number in left...right {
        if floor(sqrt(Double(number))) == sqrt(Double(number)) {
            answer -= number
        }
        else {
            answer += number
        }
    }
    
    return answer
}
