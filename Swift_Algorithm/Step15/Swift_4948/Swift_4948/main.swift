//
//  main.swift
//  Swift_4948
//
//  Created by KIM Hyung Jun on 10/7/24.
//

// [약수, 배수와 소수 2] 4948, 베르트랑 공준

import Foundation

var isPrimeNum = [Bool](repeating: true, count: 246_913)

isPrimeNum[0] = false
isPrimeNum[1] = false

for i in 2..<Int(sqrt(Double(246_913)) + 1) {
    if isPrimeNum[i] {
        var j = 2
        while i * j <= 246_912 {
            isPrimeNum[i * j] = false
            j += 1
        }
    }
}

while let input = readLine(), let n = Int(input), n != 0 {
    print(isPrimeNum[n+1...n*2].filter { $0 }.count)
}
