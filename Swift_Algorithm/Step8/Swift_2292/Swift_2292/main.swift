//
//  main.swift
//  Swift_2292
//
//  Created by KIM Hyung Jun on 9/30/24.
//

// [일반 수학 1] 2292, 벌집

import Foundation

let n = Int(readLine()!)!
var i = 1
var start = 1

while start < n {
    start += (6 * i)
    i += 1
}

print(i)
