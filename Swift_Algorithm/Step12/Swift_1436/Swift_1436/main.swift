//
//  main.swift
//  Swift_1436
//
//  Created by KIM Hyung Jun on 10/5/24.
//

import Foundation

let n = Int(readLine()!)!
var num = 665
var count = 0

while count != n {
    num += 1
    let numChar = String(num)
    var check = 0
    
    for i in numChar {
        if i == "6" {
            check += 1
        } else {
            check = 0
        }
        
        if check == 3 {
            count += 1
        }
    }
    
    if n == count {
        print("\(num)")
        break
    }
}

