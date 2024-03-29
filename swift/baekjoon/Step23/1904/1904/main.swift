//
//  main.swift
//  1904
//
//  Created by KIM Hyung Jun on 3/29/24.
//

import Foundation

let N = Int(readLine()!)!

var dp = [Int](repeating: 0, count: 1_000_001)
dp[1] = 1
dp[2] = 2
for i in 3...1_000_000 {
    dp[i] = dp[i-1] + dp[i-2]
    dp[i] %= 15746
}

print(dp[N])
