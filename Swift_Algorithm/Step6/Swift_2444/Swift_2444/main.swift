//
//  main.swift
//  Swift_2444
//
//  Created by KIM Hyung Jun on 9/9/24.
//

// 별 찍기 - 7

import Foundation

let n = Int(readLine()!)!

for i in 1...n {
    let star = String(repeating: " ", count: n-i) + String(repeating: "*", count: 2*i-1)
    print(star)
}

for i in 1..<n {
    let star = String(repeating: " ", count: i) + String(repeating: "*", count: 2*(n-i)-1)
    print(star)
}
