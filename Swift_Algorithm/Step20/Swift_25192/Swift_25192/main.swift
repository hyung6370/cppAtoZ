//
//  main.swift
//  Swift_25192
//
//  Created by KIM Hyung Jun on 8/4/24.
//

import Foundation

let n = Int(readLine()!)!
var set: Set<String> = []
var answer = 0

for _ in 0..<n {
    let name = readLine()!
    if name == "ENTER" {
        set.removeAll()
        continue
    }
    answer += set.contains(name) ? 0 : 1
    set.insert(name)
}

print(answer)
