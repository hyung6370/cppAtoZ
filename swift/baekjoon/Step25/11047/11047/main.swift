//
//  main.swift
//  11047
//
//  Created by KIM Hyung Jun on 2/5/24.
//

import Foundation

let line = readLine()!.split(separator: " ").map{Int(String($0))!}
let N = line[0]
var K = line[1]
var coinArr = Array(repeating: 1000000, count: 10)

for i in 0..<N {
    let coinValue = Int(readLine()!)!
    coinArr[i] = coinValue
}

var count = 0

for i in (0..<N).reversed() {
    let nowCount = K / coinArr[i]
    K -= nowCount * coinArr[i]
    count += nowCount
    
    if K == 0 {
        break
    }
}
print(count)
