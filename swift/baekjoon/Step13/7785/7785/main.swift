//
//  main.swift
//  7785
//
//  Created by KIM Hyung Jun on 1/9/24.
//

import Foundation

// Set을 이용
var set = Set<String>()

let N = Int(readLine()!)!

for _ in 0..<N {
    let input = readLine()!.split(separator: " ").map { String($0) }
    
    if input[1] == "enter" {
        set.insert(input[0])
    }
    else {
        set.remove(input[0])
    }
}

set.sorted(by: >).forEach { name in
    print(name)
}


// Dictionary 이용
var dict = [String : Bool]()

let N1 = Int(readLine()!)!

for _ in 0..<N1 {
    let input = readLine()!.split(separator: " ").map { String($0) }
    
    if input[1] == "enter" {
        dict[input[0]] = true
    }
    else {
        dict[input[0]] = nil
    }
}

dict.keys.sorted(by: >).forEach { name in
    print(name)
}
