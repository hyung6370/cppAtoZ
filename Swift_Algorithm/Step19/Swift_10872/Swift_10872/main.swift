//
//  main.swift
//  Swift_10872
//
//  Created by KIM Hyung Jun on 8/19/24.
//

import Foundation

let n = Int(readLine()!)!

func fac(_ n: Int) -> Int {
    if n == 1 || n == 0 { return 1 }
    return n * fac(n-1)
}

print(fac(n))
