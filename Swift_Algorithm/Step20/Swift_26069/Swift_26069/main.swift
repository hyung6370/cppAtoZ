//
//  main.swift
//  Swift_26069
//
//  Created by KIM Hyung Jun on 8/19/24.
//

import Foundation

let n = Int(readLine()!)!
var set: Set<String> = ["ChongChong"]

for _ in 0..<n {
    let name = readLine()!.split(separator: " ").map { String($0) }
    
    if set.contains(name[0]) || set.contains(name[1]) {
        set.insert(name[0])
        set.insert(name[1])
    }
}

print(set.count)
