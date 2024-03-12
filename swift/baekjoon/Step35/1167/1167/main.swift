//
//  main.swift
//  1167
//
//  Created by KIM Hyung Jun on 3/12/24.
//

import Foundation

let V = Int(readLine()!)!
var graph = [[(Int, Int)]](repeating: [], count: V+1)
var visited = [Bool](repeating: false, count: V+1)

for _ in 0..<V {
    let input = readLine()!.dropLast(2).split(separator: " ").map{ Int($0)! }
    let node = input[0]
    var index = 1
    while index < input.count {
        graph[node].append((input[index], input[index+1]))
        index += 2
    }
}

var endNode: (node: Int, cost: Int) = (node: 0, cost: 0)

func dfs(node: Int, depth: Int) {
    visited[node] = true
    
    if depth > endNode.cost {
        endNode = (node, depth)
    }
    
    for (nextNode, distance) in graph[node] {
        if !visited[nextNode] {
            visited[nextNode] = true
            dfs(node: nextNode, depth: depth+distance)
            visited[nextNode] = false
        }
    }
}

dfs(node: 1, depth: 0)
visited = [Bool](repeating: false, count: V+1)
dfs(node: endNode.node, depth: 0)
print(endNode.cost)
