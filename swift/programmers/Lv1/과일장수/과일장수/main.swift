//
//  main.swift
//  과일장수
//
//  Created by KIM Hyung Jun on 12/16/23.
//

import Foundation

func solution(_ k: Int, _ m: Int, _ score: [Int]) -> Int {
    let s = score.sorted(by: >)
    return stride(from: m-1, to: score.count, by: m)
        .reduce(0) { $0 + s[$1] * m}
}

