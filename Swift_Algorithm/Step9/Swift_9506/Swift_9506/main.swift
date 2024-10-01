//
//  main.swift
//  Swift_9506
//
//  Created by KIM Hyung Jun on 10/1/24.
//

// [약수, 배수와 소수] 9506, 약수들의 합

import Foundation

while true {
    let n = Int(readLine()!)!
    var arr: [Int] = []
    if n == -1 { break }
    
    for i in 1...Int(sqrt(Double(n))) {
        if n % i == 0 {
            arr.append(n / i)
            arr.append(i)
        }
    }
    
    arr = Array(Set(arr)).sorted(by: <)
    arr.removeLast()
    
    if arr.reduce(0, +) == n {
        let arrString = arr.map { String($0) }.joined(separator: " + ")
        print("\(n) = \(arrString)")
    } else {
        print("\(n) is NOT perfect.")
    }
}

