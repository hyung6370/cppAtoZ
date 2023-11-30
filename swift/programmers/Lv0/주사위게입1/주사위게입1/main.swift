//
//  main.swift
//  주사위게입1
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ a: Int, _  b: Int) -> Int {
    if a % 2 == 1 && b % 2 == 1 { return a*a + b*b }
    if a % 2 == 0 && b % 2 == 0 { return abs(a-b) }
    return 2 * (a+b)
}

func solution2(_ a: Int, _ b: Int) -> Int {
    if a % 2 != 0 && b % 2 != 0 { return a*a + b*b }
    if a % 2 != 0 || b % 2 != 0 { return 2 * (a+b) }
    return abs(a-b)
}
