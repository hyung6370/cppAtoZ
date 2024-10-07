//
//  main.swift
//  Swift_4134
//
//  Created by KIM Hyung Jun on 10/7/24.
//

// [약수, 배수와 소수 2] 4134, 다음 소수

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
let t = Int(readLine()!)!
for _ in 0..<t {
    var n = Int(readLine()!)!
    while true {
        if isPrimeNum(n) {
            print(n)
            break
        } else {
            n += 1
        }
    }
}

