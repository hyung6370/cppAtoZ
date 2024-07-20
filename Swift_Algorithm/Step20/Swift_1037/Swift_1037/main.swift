//
//  main.swift
//  Swift_1037
//
//  Created by KIM Hyung Jun on 7/20/24.
//

import Foundation

let A = Int(readLine()!)!
let input = readLine()!.split(separator: " ").map { Int($0)! }
// N = 가장 작은 약수 * 가장 큰 약수
print(input.max()! * input.min()!)

