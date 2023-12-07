//
//  main.swift
//  예산
//
//  Created by KIM Hyung Jun on 12/6/23.
//

import Foundation

func solution(_ d: [Int], _ budget: Int) -> Int {
    var budget = budget
    
    return d.sorted().filter {
        budget = budget - $0
        return budget >= 0
    }.count
}

