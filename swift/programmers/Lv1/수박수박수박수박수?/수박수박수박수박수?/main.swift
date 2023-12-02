//
//  main.swift
//  수박수박수박수박수?
//
//  Created by KIM Hyung Jun on 12/2/23.
//

import Foundation

func solution(_ n: Int) -> String {
    return (0..<n).map { ($0 % 2 == 0 ? "수" : "박") }.reduce("", +)
}

func solution2(_ n: Int) -> String {
    var str = ""
    
    for i in 1...n {
        str += i % 2 == 1 ? "수" : "박"
    }
    
    return str
}
