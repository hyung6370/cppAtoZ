//
//  main.swift
//  Swift_11286
//
//  Created by KIM Hyung Jun on 9/4/24.
//

import Foundation

struct Heap<T: Comparable> {
    private var elements: [T] = []
    private let comparer: (T, T) -> Bool
    
    var isEmpty: Bool {
        return elements.count <= 1
    }
    
    var peek: T? {
        if isEmpty {
            return nil
        }
        return elements[1]
    }
    
    init(comparer: @escaping (T, T) -> Bool) {
        self.comparer = comparer
    }
    
    mutating func insert(element: T) {
        if elements.isEmpty {
            elements.append(element)
            elements.append(element)
            return
        }
        elements.append(element)
        swimUp(index: elements.count - 1)
    }
    
    mutating private func swimUp(index: Int) {
        var index = index
        while index > 1 && comparer(elements[index], elements[index / 2]) {
            elements.swapAt(index, index/2)
            index /= 2
        }
    }
    
    mutating func pop() -> T? {
        if elements.count < 2 { return nil }
        elements.swapAt(1, elements.count - 1)
        let deletedElement = elements.removeLast()
        diveDown(index: 1)
        return deletedElement
    }
    
    mutating private func diveDown(index: Int) {
        var swapIndex = index
        var isSwap = false
        let leftIndex = index * 2
        let rightIndex = index * 2 + 1
        
        if leftIndex < elements.endIndex && comparer(elements[leftIndex], elements[swapIndex]) {
            swapIndex = leftIndex
            isSwap = true
        }
        
        if rightIndex < elements.endIndex && comparer(elements[rightIndex], elements[swapIndex]) {
            swapIndex = rightIndex
            isSwap = true
        }
        
        if isSwap {
            elements.swapAt(swapIndex, index)
            diveDown(index: swapIndex)
        }
    }
}

struct Data: Comparable {
    static func < (lhs: Data, rhs: Data) -> Bool {
        return lhs.value == rhs.value ? lhs.num < rhs.num : lhs.value < rhs.value
    }
    
    var value: Int
    var num: Int
}

let n = Int(readLine()!)!
var absHeap: Heap<Data> = Heap(comparer: <)

for _ in 0..<n {
    let x = Int(readLine()!)!
    
    if x == 0 {
        print(absHeap.pop()?.num ?? 0)
    }
    else {
        absHeap.insert(element: Data(value: abs(x), num: x))
    }
}


