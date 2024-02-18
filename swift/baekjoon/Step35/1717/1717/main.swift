//
//  main.swift
//  1717
//
//  Created by KIM Hyung Jun on 2/18/24.
//

import Foundation

let t = readLine()!.split(separator: " ").map{ Int(String($0))! }

let n = t[0]
let m = t[1]

var parent = Array(repeating: 0, count: n+1)
(1...n).forEach{ parent[$0] = $0 }

func find(_ x: Int) -> Int {
    if x != parent[x] {
        parent[x] = find(parent[x])
    }
    return parent[x]
}

func union(_ a: Int, _ b: Int) {
    let a = find(a)
    let b = find(b)
    
    if a < b {
        parent[b] = a
    }
    else {
        parent[a] = b
    }
}

var ans = ""

for _ in 0..<m {
    let t = readLine()!.split(separator: " ").map{ Int(String($0))! }
    let op = t[0]
    let a = t[1]
    let b = t[2]
    
    if op == 0 {
        union(a, b)
    }
    else {
        ans += find(a) == find(b) ? "YES\n" : "NO\n"
    }
}

print(ans.dropLast())
