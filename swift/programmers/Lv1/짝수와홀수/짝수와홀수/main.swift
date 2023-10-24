//
//  main.swift
//  짝수와홀수
//
//  Created by KIM Hyung Jun on 10/23/23.
//

import Foundation

func solution(_ num:Int) -> String {
    if num % 2 == 0 {
        return "Even"
    }
    return "Odd"
}

if let inputString = readLine() {
    if let num = Int(inputString) {
        let result = solution(num)
        print(result)
    }
}
