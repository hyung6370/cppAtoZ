//
//  main.swift
//  1654
//
//  Created by KIM Hyung Jun on 4/3/24.
//

import Foundation

func readInteger() -> Int {
    return Int(readLine()!)!
}

let inputs = readLine()!.split(separator: " ").map { Int($0)! }
let N = inputs[0]
let K = inputs[1]

var n = [Int]()

for _ in 0..<N {
    n.append(readInteger())
}

var s = 1
var e = n.max()!

while s <= e {
    let mid = (s + e) / 2
    var lan = 0
    
    for i in n {
        lan += i / mid
    }
    
    if lan >= K {
        s = mid + 1
    }
    else {
        e = mid - 1
    }
}

print(e)
