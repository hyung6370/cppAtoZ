//
//  main.swift
//  Swift_3009
//
//  Created by KIM Hyung Jun on 7/31/24.
//

import Foundation

var coords: [(Int, Int)] = []

for _ in 0..<3 {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    coords.append((input[0], input[1]))
}

let x = Dictionary(coords.map { ($0.0, 1) }, uniquingKeysWith: +)
let y = Dictionary(coords.map { ($0.1, 1) }, uniquingKeysWith: +)
// 딕셔너리를 사용해 x좌표와 y좌표가 몇 번 등장했는지 count 해주고, 1번 등장한 좌표 출력
print(x.first { $0.value == 1 }!.key, y.first { $0.value == 1 }!.key)
