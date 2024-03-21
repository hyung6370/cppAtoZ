//
//  main.swift
//  28279
//
//  Created by KIM Hyung Jun on 3/21/24.
//

import Foundation

func readLineAsIntegers() -> [Int] {
    return readLine()!.split(separator: " ").map{ Int($0)! }
}

var N = Int(readLine()!)!
var deque: [Int] = []

for _ in 0..<N {
    let num = readLineAsIntegers()
    let l = deque.count
    
    switch num[0] {
    case 1:
        deque.insert(num[1], at: 0)
    case 2:
        deque.append(num[1])
    case 3:
        if l > 0 {
            print(deque.removeFirst())
        }
        else {
            print(-1)
        }
    case 4:
        if l > 0 {
            print(deque.removeLast())
        }
        else {
            print(-1)
        }
    case 5:
        print(deque.count)
    case 6:
        print(deque.isEmpty ? 1 : 0)
    case 7:
        if l > 0 {
            print(deque.first!)
        }
        else {
            print(-1)
        }
    case 8:
        if l > 0 {
            print(deque.last!)
        }
        else {
            print(-1)
        }
    default:
        break
    }
}
