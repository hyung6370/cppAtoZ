//
//  main.swift
//  Swift_25305
//
//  Created by KIM Hyung Jun on 8/17/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], k = input[1]
var scores = readLine()!.split(separator: " ").map { Int($0)! }.sorted(by: >)

print(scores[k-1])
