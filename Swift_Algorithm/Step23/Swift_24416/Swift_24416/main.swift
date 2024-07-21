//
//  main.swift
//  Swift_24416
//
//  Created by KIM Hyung Jun on 7/21/24.
//

import Foundation

let n = Int(readLine()!)!
var dp = [0, 1]

for i in 2...40 {
    dp.append(dp[i-1] + dp[i-2])
}

print(dp[n], n-2)
