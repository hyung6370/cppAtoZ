//
//  main.swift
//  1197
//
//  Created by KIM Hyung Jun on 2/19/24.
//

import Foundation

typealias Edge = (a: Int, b: Int, cost: Int)

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let v = input[0], e = input[1]
var parent = [Int](0...v)
var edges: [Edge] = []

func find(_ x: Int) -> Int {
    if parent[x] == x {
        return x
    }
    
    parent[x] = find(parent[x])
    return parent[x]
}

func union(_ a: Int, _ b: Int) {
    let a = find(a)
    let b = find(b)
    
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

func isSameParent(_ a: Int, _ b: Int) -> Bool {
    return find(a) == find(b)
}

for _ in 0..<e {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let a = input[0], b = input[1], cost = input[2]
    edges.append(Edge(a, b, cost))
}

edges.sort { $0.cost < $1.cost }

var answer = 0

for edge in edges {
    let a = edge.a, b = edge.b, cost = edge.cost
    
    if !isSameParent(a, b) {
        union(a, b)
        answer += cost
    }
}

print(answer)
