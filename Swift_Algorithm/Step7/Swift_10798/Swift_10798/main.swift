//
//  main.swift
//  Swift_10798
//
//  Created by KIM Hyung Jun on 9/29/24.
//

// [2차원 배열] 10798, 세로읽기

import Foundation

var matrix = [[String]](repeating: [String](repeating: "", count: 15), count: 5)

for i in 0..<5 {
    let word = readLine()!.map { String($0) }
    let lastIndex = word.count - 1
    matrix[i].replaceSubrange(0..<lastIndex, with: word)
}

for i in 0..<15 {
    for j in 0..<5 {
        print(matrix[j][i], terminator: "")
    }
}
