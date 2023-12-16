//
//  main.swift
//  모의고사
//
//  Created by KIM Hyung Jun on 12/16/23.
//

import Foundation

func solution(_ answers: [Int]) -> [Int] {
    let answer = (
        one: [1, 2, 3, 4, 5],
        two: [2, 1, 2, 3, 2, 4, 2, 5],
        thr: [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    )
    
    var point = [1:0, 2:0, 3:0]
    
    for (i, v) in answers.enumerated() {
        if v == answer.one[i % 5] { point[1] = point[1]! + 1 }
        if v == answer.two[i % 5] { point[2] = point[2]! + 1 }
        if v == answer.thr[i % 5] { point[3] = point[3]! + 1 }
    }
    
    return point.sorted{ $0.key < $1.key }.filter{ $0.value == point.values.max() }.map{ $0.key }
}

