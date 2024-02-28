//
//  24480.swift
//  24479
//
//  Created by KIM Hyung Jun on 2/28/24.
//

import Foundation

let input1 = readLine()!.split(separator: " ").map{ Int($0) }
let n = input[0], m = input[1], r = input[2]
var visited1 = [Int](repeating: 0, count: n+1)
var graph1 = [[Int]](repeating: [], count: n+1)

for _ in 0..<m {
    let input1 = readLine()!.split(separator: " ").map{ Int($0)! }
    let u1 = input1[0], v1 = input[1]
    graph1[u1].append(v1)
    graph1[v1].append(u1)
}

var depth1 = 1

func dfs1(node: Int) {
    visited1[node] = depth1
    
    for nextNode in graph1[node].sorted(by: >) {
        if visited[nextNode] == 0 {
            depth += 1
            dfs1(node: nextNode)
        }
    }
}

dfs1(node: r)

print(visited1[1...].map{ String($0) }.joined(separator: "\n"))
