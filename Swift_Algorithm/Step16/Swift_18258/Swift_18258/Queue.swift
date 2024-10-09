//
//  Queue.swift
//  Swift_18258
//
//  Created by KIM Hyung Jun on 10/9/24.
//

import Foundation

struct Queue {
    private var array: [Int] = []
    private var index: Int = 0
    
    var size: Int {
        return array.count - index
    }
    
    var front: Int {
        return self.isEmpty ? -1 : array[index]
    }
    
    var back: Int {
        return self.isEmpty ? -1 : array.last!
    }
    
    var empty: Int {
        return self.isEmpty ? 1 : 0
    }
    
    var isEmpty: Bool {
        return array.count - index <= 0
    }
    
    mutating func push(_ element: Int) {
        array.append(element)
    }
    
    mutating func pop() -> Int {
        guard !self.isEmpty else {
            return -1
        }
        let element = array[index]
        index += 1
        return element
    }
}
