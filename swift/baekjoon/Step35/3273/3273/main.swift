//
//  main.swift
//  3273
//
//  Created by KIM Hyung Jun on 2/16/24.
//

import Foundation

let n = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map{ Int(String($0))! }.sorted()
let x = Int(readLine()!)!

var res: Int = 0
var l: Int = 0
var r: Int = n-1

while l < r {
    var tmp = arr[l] + arr[r]
    
    if tmp == x {
        res += 1
        l += 1
    }
    else if tmp < x {
        l += 1
    }
    else {
        r -= 1
    }
}

print(res)
