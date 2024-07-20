//
//  main.swift
//  Swift_27433
//
//  Created by KIM Hyung Jun on 7/21/24.
//

import Foundation

let N = Int(readLine()!)!

func fac(_ n: Int) -> Int {
    if n == 0 {
        return 1
    }
    return n * fac(n-1)
}

print(fac(N))
