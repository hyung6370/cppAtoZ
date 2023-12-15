//
//  main.swift
//  콜라문제
//
//  Created by KIM Hyung Jun on 12/14/23.
//

import Foundation

func solution(_ a: Int, _ b: Int, _ n: Int) -> Int {
    var cokeCount = n
    var receivedCokeCount = 0
    
    while cokeCount >= a {
        receivedCokeCount += cokeCount / a * b
        cokeCount = (cokeCount / a * b) + (cokeCount % a)
    }
    
    return receivedCokeCount
}

