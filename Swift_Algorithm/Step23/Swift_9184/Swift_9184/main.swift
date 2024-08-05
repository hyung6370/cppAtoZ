//
//  main.swift
//  Swift_9184
//
//  Created by KIM Hyung Jun on 8/5/24.
//

// [DP], 9184, 신나는 함수 실행

import Foundation

var w = [[[Int]]](repeating: [[Int]](repeating: [Int](repeating: 1, count: 21), count: 21), count: 21)


// 바텀 업
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


// 탑 다운
func f(_ a: Int, _ b: Int, _ c: Int) -> Int {
    if a <= 0 || b <= 0 || c <= 0 {
        return 1
    }
    
    if a > 20 || b > 20 || c > 20 {
        return f(20, 20, 20)
    }
    
    if w[a][b][c] != 1 {
        return w[a][b][c]
    }
    
    if a < b && b < c {
        w[a][b][c] = f(a, b, c-1) + f(a, b-1, c-1) - f(a, b-1, c)
        return w[a][b][c]
    }
    
    w[a][b][c] = f(a-1, b, c) + f(a-1, b-1, c) + f(a-1, b, c-1) - f(a-1, b-1, c-1)
    return w[a][b][c]
}

while let input = readLine()?.split(separator: " ").map({ Int($0)! }), input != [-1, -1, -1] {
    let a = input[0], b = input[1], c = input[2]
    print("w(\(a), \(b), \(c)) =", f(a, b, c))
}
