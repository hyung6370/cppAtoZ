//
//  main.swift
//  Swift_9461
//
//  Created by KIM Hyung Jun on 9/26/24.
//

// [DP] 9461, 파도반 수열

import Foundation

var arr = [Int](repeating: 0, count: 101)
arr[1] = 1
arr[2] = 1
arr[3] = 1

for i in 4...100 {
    arr[i] = arr[i-2] + arr[i-3]
}

let t = Int(readLine()!)!
for _ in 0..<t {
    let n = Int(readLine()!)!
    print(arr[n])
}
