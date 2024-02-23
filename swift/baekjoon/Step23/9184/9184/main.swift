//
//  main.swift
//  9184
//
//  Created by KIM Hyung Jun on 2/23/24.
//

import Foundation

var w = [[[Int]]](repeating: [[Int]](repeating: [Int](repeating: 1, count: 21), count: 21), count: 21)

for a in 1...20 {
    for b in 1...20 {
        for c in 1...20 {
            if a < b && b < c {
                w[a][b][c] = w[a][b][c-1] + w[a][b-1][c-1] - w[a][b-1][c]
            }
            else {
                w[a][b][c] = w[a-1][b][c] + w[a-1][b-1][c] + w[a-1][b][c-1] - w[a-1][b-1][c-1]
            }
        }
    }
}

while let input = readLine()?.split(separator: " ").map({ Int($0)! }), input != [-1, -1, -1] {
    let a = input[0], b = input[1], c = input[2]
    if !input.filter({ $0 <= 0 }).isEmpty {
        print("w(\(a), \(b), \(c)) = 1")
        continue
    }
    
    if !input.filter({ $0 > 20 }).isEmpty {
        print("w(\(a), \(b), \(c)) = \(w[20][20][20])")
        continue
    }
    
    print("w(\(a), \(b), \(c)) = \(w[a][b][c])")
}
