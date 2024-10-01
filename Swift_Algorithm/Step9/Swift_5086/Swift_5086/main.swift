//
//  main.swift
//  Swift_5086
//
//  Created by KIM Hyung Jun on 10/1/24.
//

import Foundation

while true {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let a = input[0], b = input[1]
    if a == 0 && b == 0 { break }
    
    if b % a == 0 {
        print("factor")
    } else if a % b == 0 {
        print("multiple")
    } else {
        print("neither")
    }
}

