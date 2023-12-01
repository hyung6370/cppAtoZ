//
//  main.swift
//  내적
//
//  Created by KIM Hyung Jun on 12/1/23.
//

import Foundation

func solution(_ a: [Int], _ b: [Int]) -> Int {
    return zip(a, b).map(*).reduce(0, +)
}

