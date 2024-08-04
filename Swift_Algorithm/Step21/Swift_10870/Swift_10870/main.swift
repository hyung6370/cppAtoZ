//
//  main.swift
//  Swift_10870
//
//  Created by KIM Hyung Jun on 8/4/24.
//

import Foundation

let n = Int(readLine()!)!

func fibo(_ n: Int) -> Int {
    if n <= 1 {
        return n
    }
    return fibo(n-1) + fibo(n-2)
}

print(fibo(n))
