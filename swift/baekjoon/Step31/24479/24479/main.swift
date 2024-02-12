//
//  main.swift
//  24479
//
//  Created by KIM Hyung Jun on 2/12/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map{ Int($0)! }
let N = input[0], M = input[1], R = input[2]
var visited = [Int](repeating: 0, count: N+1)
var graph = [[Int]](repeating: [], count: N+1)

for _ in 0..<M {
    let input = readLine()!.split(separator: " ").map{ Int($0)! }
    let u = input[0], v = input[1]
    graph[u].append(v)
    graph[v].append(u)
}

var depth = 1

func dfs(node: Int) {
    visited[node] = depth
    
    for nextNode in graph[node].sorted(by: <) {
        if visited[nextNode] == 0 {
            depth += 1
            dfs(node: nextNode)
        }
    }
}

dfs(node: R)

print(visited[1...].map{ String($0) }.joined(separator: "\n"))
