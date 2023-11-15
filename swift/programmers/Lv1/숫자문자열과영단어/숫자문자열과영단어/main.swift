//
//  main.swift
//  숫자문자열과영단어
//
//  Created by KIM Hyung Jun on 11/15/23.
//

import Foundation

func solution(_ s: String) -> Int {
    let arr = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    var str = s
    
    for i in 0..<arr.count {
        str = str.replacingOccurrences(of: arr[i], with: String(i))
    }
    
    return Int(str)!
}

