//
//  BfsDeque.swift
//  13549
//
//  Created by KIM Hyung Jun on 4/11/24.
//

import Foundation

struct Deque<T> {
    private var leftArray: [T] = []
    private var rightArray: [T] = []
    private var leftIndex: Int = 0
    private var rightIndex: Int = 0
    
    var isEmpty: Bool {
        return leftIndex + rightIndex >= leftArray.count + rightArray.count
    }
    
    var size: Int {
        return (leftArray.count + rightArray.count) - (leftIndex + rightIndex)
    }
    
    var front: T? {
        if isEmpty {
            return nil
        }
        
        if leftIndex >= leftArray.count {
            return rightArray[rightIndex]
        }
        
        return leftArray.last
    }
    
    var back: T? {
        if isEmpty {
            return nil
        }
        
        if rightIndex >= rightArray.count {
            return leftArray[leftIndex]
        }
        
        return rightArray.last
    }
    
    mutating func pushLeft(_ element: T) {
        leftArray.append(element)
    }
    
    mutating func popLeft() -> T? {
        if isEmpty {
            return nil
        }
        
        if leftIndex >= leftArray.count {
            let element = rightArray[rightIndex]
            rightIndex += 1
            return element
        }
        
        return leftArray.popLast()
    }
    
    mutating func pushRight(_ element: T) {
        rightArray.append(element)
    }
    
    mutating func popRight() -> T? {
        if isEmpty {
            return nil
        }
        
        if rightIndex >= rightArray.count {
            let element = leftArray[leftIndex]
            leftIndex += 1
            return element
        }
        
        return rightArray.popLast()
    }
}


let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], k = input[1]
var visited = [Bool](repeating: false, count: 100_001)

func isVaildCoord(x: Int) -> Bool {
    return 0..<100_001 ~= x
}

func bfs(x: Int) {
    var deque = Deque<(Int, Int)>()
    deque.pushRight((x, 0))
    
    while !deque.isEmpty {
        let now = deque.popLeft()!
        let x = now.0
        let time = now.1
        if x == k {
            print(time)
            break
        }
        for i in [-1, 1, x] {
            let dx = x + i
            if !isVaildCoord(x: dx) || visited[dx] {
                continue
            }
            
            visited[dx] = true
            
            if i == x {
                deque.pushLeft((dx, time))
            } else {
                deque.pushRight((dx, time + 1))
            }
        }
    }
}
