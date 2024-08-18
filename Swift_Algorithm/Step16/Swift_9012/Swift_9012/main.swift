//
//  main.swift
//  Swift_9012
//
//  Created by KIM Hyung Jun on 8/18/24.
//

import Foundation

func solution() {
    let ps = readLine()!
    var stack: [Character] = []
    
    for s in ps {
        if stack.isEmpty {
            stack.append(s)
            continue
        }
        
        if s == ")" && stack.last! == "(" {
            stack.removeLast()
        }
        else {
            stack.append(s)
        }
    }
    print(stack.isEmpty ? "YES" : "NO")
}

let t = Int(readLine()!)!
for _ in 0..<t {
    solution()
}
