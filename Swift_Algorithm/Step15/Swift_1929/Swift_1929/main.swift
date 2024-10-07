//
//  main.swift
//  Swift_1929
//
//  Created by KIM Hyung Jun on 10/7/24.
//

// [약수, 배수와 소수 2] 1929, 소수 구하기

import Foundation

func isPrimeNum(_ n: Int) -> Bool {
    if n < 2 { return false }
    let sqrtN = Int(sqrt(Double(n)))
    if sqrtN < 2 { return true }
    for i in 2...sqrtN {
        if n % i == 0 { return false }
    }
    return true
}

let input = readLine()!.split(separator: " ").map { Int($0)! }
let m = input[0], n = input[1]

for i in m...n {
    if isPrimeNum(i) {
        print(i)
    }
}

