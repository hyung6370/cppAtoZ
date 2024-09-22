//
//  main.swift
//  Swift_10988
//
//  Created by KIM Hyung Jun on 9/22/24.
//

import Foundation

let s = readLine()!

func isPalindrome(s: String) -> Int {
    let cnt = s.count
    let cha = Array(s)
    
    for i in 0..<cnt/2 {
        if cha[i] != cha[cnt-1-i] {
            return 0
        }
    }
    
    return 1
}

print(isPalindrome(s: s))
