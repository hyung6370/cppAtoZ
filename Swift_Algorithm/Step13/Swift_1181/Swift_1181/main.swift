//
//  main.swift
//  Swift_1181
//
//  Created by KIM Hyung Jun on 10/5/24.
//

// [정렬] 1181, 단어 정렬

import Foundation

let n = Int(readLine()!)!
var arr: [String] = []
for _ in 0..<n {
    arr.append(readLine()!)
}

arr = Array(Set(arr))
arr.sort { $0.count == $1.count ? $0 < $1 : $0.count < $1.count }

arr.forEach { print($0) }
