//
//  main.swift
//  Swift_14425
//
//  Created by KIM Hyung Jun on 8/3/24.
//

import Foundation

var s: Set<String> = []
var count = 0

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], m = input[1]

for _ in 0..<n {
    s.insert(readLine()!)
}

for _ in 0..<m {
    let word = readLine()!
    if s.contains(word) {
        count += 1
    }
    // count += s.contains(word) ? 1 : 0
}
print(count)
