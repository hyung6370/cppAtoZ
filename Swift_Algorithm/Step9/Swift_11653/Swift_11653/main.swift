//
//  main.swift
//  Swift_11653
//
//  Created by KIM Hyung Jun on 10/3/24.
//

// [약수, 배수와 소수] 11653, 소인수분해

import Foundation

var n = Int(readLine()!)!
var d: Int = 2

while n != 1 {
    if n % d != 0 {
        d += 1
    } else {
        n /= d
        print(d)
    }
}
