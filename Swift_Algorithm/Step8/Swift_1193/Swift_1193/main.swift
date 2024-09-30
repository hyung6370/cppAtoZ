//
//  main.swift
//  Swift_1193
//
//  Created by KIM Hyung Jun on 9/30/24.
//

// [일반 수학 1] 1193, 분수찾기

import Foundation

let x = Int(readLine()!)!
var index = 0
var maxValue = 0

while x > maxValue {
    index += 1
    maxValue += index
}

let order = maxValue - x

if index % 2 == 0 {
    print("\(index - order)/\(order + 1)")
} else {
    print("\(order + 1)/\(index - order)")
}
