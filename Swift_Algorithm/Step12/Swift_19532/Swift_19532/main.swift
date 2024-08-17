//
//  main.swift
//  Swift_19532
//
//  Created by KIM Hyung Jun on 8/17/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let a = input[0], b = input[1], c = input[2], d = input[3], e = input[4], f = input[5]

for i in -999...999 {
    for j in -999...999 {
        let r1 = a*i + b*j
        let r2 = d*i + e*j
        
        if r1 == c && r2 == f {
            print(i, terminator: " ")
            print(j)
        }
    }
}
