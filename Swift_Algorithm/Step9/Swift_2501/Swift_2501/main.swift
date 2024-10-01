//
//  main.swift
//  Swift_2501
//
//  Created by KIM Hyung Jun on 10/1/24.
//

// [약수, 배수와 소수] 2501, 약수 구하기

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], k = input[1]
var arr: [Int] = []

for i in 1...n {
    if n % i == 0 {
        arr.append(i)
    }
}

k <= arr.count ? print(arr[k-1]) : print("0")
