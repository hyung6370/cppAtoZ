//
//  main.swift
//  Swift_11050
//
//  Created by KIM Hyung Jun on 9/23/24.
//

// [조합론] 11050, 이항 계수 1

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], k = input[1]

func binoCoef(_ n: Int, _ k: Int) -> Int {
    if k == 0 || n == k {
        return 1
    }
    return binoCoef(n-1, k) + binoCoef(n-1, k-1)
}

print(binoCoef(n, k))
