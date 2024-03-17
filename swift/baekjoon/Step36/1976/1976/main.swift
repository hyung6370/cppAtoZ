//
//  main.swift
//  1976
//
//  Created by KIM Hyung Jun on 3/17/24.
//

import Foundation

let N = Int(readLine()!)!
let M = Int(readLine()!)!
var edges: [[Int]] = []

for _ in 0..<N {
    edges.append(readLine()!.split(separator: " ").map{ Int($0)! })
}

var parent = [Int](0...N)

func findParent(_ x: Int) -> Int {
    if parent[x] == x {
        return x
    }
    
    parent[x] = findParent(parent[x])
    return parent[x]
}

func unionParent(a: Int, b: Int) {
    let a = findParent(a)
    let b = findParent(b)
    
    if a == b {
        return
    }
    if a > b {
        parent[a] = b
    }
    else {
        parent[b] = a
    }
}

for y in 0...N {
    for x in 0..<N {
        if edges[y][x] == 1 {
            unionParent(a: y+1, b: x+1)
        }
    }
}

Set(readLine()!.split(separator: " ").map{ findParent(Int($0)!) }).count == 1 ? print("YES") : print("NO")
