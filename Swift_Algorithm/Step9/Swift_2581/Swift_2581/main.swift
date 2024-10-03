//
//  main.swift
//  Swift_2581
//
//  Created by KIM Hyung Jun on 10/3/24.
//

// [약수, 배수와 소수] 2581, 소수

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

var primeNums: [Int] = []
let m = Int(readLine()!)!
let n = Int(readLine()!)!

for i in m...n {
    if isPrimeNum(i) {
        primeNums.append(i)
    }
}

primeNums.sort()

if primeNums.isEmpty {
    print("-1")
} else {
    print(primeNums.reduce(0, +))
    print(primeNums.min()!)
}
