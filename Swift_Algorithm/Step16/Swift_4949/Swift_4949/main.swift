//
//  main.swift
//  Swift_4949
//
//  Created by KIM Hyung Jun on 9/23/24.
//

// [스택, 큐, 덱] 4949, 균형잡힌 세상

import Foundation

while let s = readLine(), s != "." {
    var stack: [Character] = []
    
    for s in s {
        if !["[", "]", "(", ")"].contains(s) {
            continue
        }
        
        if s == "]" && stack.last == "[" {
            stack.removeLast()
        } else if s == ")" && stack.last == "(" {
            stack.removeLast()
        } else {
            stack.append(s)
        }
    }
    
    print(stack.isEmpty ? "yes" : "no")
}

