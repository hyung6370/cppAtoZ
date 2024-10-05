//
//  main.swift
//  Swift_10814
//
//  Created by KIM Hyung Jun on 10/5/24.
//

// [정렬] 10814, 나이순 정렬

import Foundation

let n = Int(readLine()!)!
var arr: [(age: Int, name: String)] = []

for _ in 0..<n {
    let input = readLine()!.split(separator: " ")
    let age = Int(input[0])!, name = String(input[1])
    arr.append((age, name))
}

arr.sort { $0.age < $1.age }
arr.forEach { print($0.age, $0.name) }
