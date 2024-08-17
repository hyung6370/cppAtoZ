//
//  main.swift
//  Swift_1735
//
//  Created by KIM Hyung Jun on 8/17/24.
//

import Foundation

let n = Int(readLine()!)!
var s = Set<String>()

for _ in 0..<n {
    let input = readLine()!.split(separator: " ")
    let name = input[0], isEnter = input[1]
    
    if isEnter == "enter" {
        s.insert(String(name))
    }
    else {
        s.remove(String(name))
    }
}

for cur in s.sorted(by: { $0 > $1 }) {
    print(cur)
}
