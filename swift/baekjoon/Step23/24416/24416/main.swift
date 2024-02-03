//
//  main.swift
//  24416
//
//  Created by KIM Hyung Jun on 2/3/24.
//

import Foundation

let n = Int(readLine()!)!
var pre = [0, 1]

for i in 2...40 {
    pre.append(pre[i-1] + pre[i-2])
}

print(pre[n], n-2)
