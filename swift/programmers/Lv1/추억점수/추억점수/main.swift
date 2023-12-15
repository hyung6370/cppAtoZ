//
//  main.swift
//  추억점수
//
//  Created by KIM Hyung Jun on 12/15/23.
//

import Foundation

func solution(_ name: [String], _ yearning: [Int], _ photo: [[String]]) -> [Int] {
    let score: [String: Int] = Dictionary(uniqueKeysWithValues: zip(name, yearning))
    
    return photo.map { $0.reduce(0) { $0 + (score[$1] ?? 0) } }
}

func solution2(_ name: [String], _ yearning: [Int], _ photo: [[String]]) -> [Int] {
    var result = [Int]()
    
    for i in 0..<photo.count {
        var sum = 0
        for j in 0..<photo[i].count {
            if name.contains(photo[i][j]) {
                sum += yearning[name.firstIndex(of: photo[i][j])!]
            }
        }
        result.append(sum)
    }
    
    return result
}
