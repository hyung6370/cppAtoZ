//
//  main.swift
//  Swift_2869
//
//  Created by KIM Hyung Jun on 10/1/24.
//

// [일반 수학 1] 2869, 달팽이는 올라가고 싶다

import Foundation

let input = readLine()!.split(separator: " ").map { Double($0)! }
let a = input[0], b = input[1], v = input[2]
let result = Int(ceil((v-b)/(a-b)))
print(result)
