//
//  main.swift
//  12789
//
//  Created by KIM Hyung Jun on 2/20/24.
//

import Foundation

let N = Int(readLine()!)
var stu = Array(readLine()!.split(separator: " ").map{ Int(String($0))! }.reversed())

var stack = [Int]()
var target = 1

while !stu.isEmpty {
    let person = stu.popLast()!
    
    if person == target {
        target += 1
        
        while !stack.isEmpty && stack.last! == target {
            _ = stack.popLast()
            target += 1
        }
    }
    else {
        stack.append(person)
    }
}

print(stack.isEmpty ? "Nice" : "Sad")
