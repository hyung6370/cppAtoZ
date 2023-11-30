//
//  main.swift
//  부분문자열이어붙여문자열만들기
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ my_strings: [String], _ parts: [[Int]]) -> String {
    var result: String = ""
    
    for i in 0...my_strings.count - 1 {
        let part: [Int] = parts[i]
        let my_string: String = my_strings[i]
        let startIndex = my_string.index(my_string.startIndex, offsetBy: part[0])
        let endIndex = my_string.index(my_string.startIndex, offsetBy: part[1])
        
        result += String(my_string[startIndex...endIndex])
    }
    
    return result
}

