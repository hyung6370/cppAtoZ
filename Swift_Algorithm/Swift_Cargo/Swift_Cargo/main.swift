//
//  main.swift
//  Swift_Cargo
//
//  Created by KIM Hyung Jun on 7/18/24.
//

import Foundation

let x = Int(readLine()!)!
let N = Int(readLine()!)!

let sum = (0..<N).reduce(0) { acc, _ in
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    return acc + (input[0] * input[1])
}

print(x == sum ? "Yes" : "No")
