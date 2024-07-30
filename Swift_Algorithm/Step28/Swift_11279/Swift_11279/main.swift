//
//  main.swift
//  Swift_11279
//
//  Created by KIM Hyung Jun on 7/30/24.
//

import Foundation

struct Heap<T: Comparable> {
    private var elements: [T] = []
    private let comparer: (T, T) -> Bool
    
    init(comparer: @escaping (T, T) -> Bool) {
        self.comparer = comparer
    }
    
    mutating func insert(element: T) {
        // 첫 번째 삽입시 0번째에 요소 할당 (0번 인덱스 사용X)
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
        
        // 자식노드 > 부모노드 라면 swap
        // 루트노드라면 반복문을 탈출
        while index > 1 && elements[index] > elements[index/2] {
            elements.swapAt(index, index/2)
            index /= 2
        }
    }
    
    mutating func pop() -> T? {
        if elements.count < 2 { return nil }
        
        // 루트노드와 가장 마지막 노드를 swap
        elements.swapAt(1, elements.count - 1)
        
        let deletedElement = elements.removeLast()
        diveDown(index: 1)
        return deletedElement
    }
    
    mutating private func diveDown(index: Int) {
        var swapIndex = index
        var isSwap = false
        let leftIndex = index * 2 // 왼쪽 자식노드
        let rightIndex = index * 2 + 1 // 오른쪽 자식노드
        
        // 왼쪽 자식노드가 있고, 왼쪽 자식노드가 더 크다면, 왼쪽 노드를 바꿀 노드로 정함
        if leftIndex < elements.endIndex && elements[swapIndex] < elements[leftIndex] {
            swapIndex = leftIndex
            isSwap = true
        }
        // 오른쪽 자식노드가 있고, 오른쪽 자식노드가 더 크다면, 오른쪽 노드를 바꿀 노드로 정함
        if rightIndex < elements.endIndex && elements[swapIndex] < elements[rightIndex] {
            swapIndex = rightIndex
            isSwap = true
        }
        
        // 바꿀 노드가 있다면, Swap
        // 바꾼 노드에 대해서 diveDown
        if isSwap {
            elements.swapAt(swapIndex, index)
            diveDown(index: swapIndex)
        }
    }
}

var maxHeap = Heap<Int>(comparer: >)
let n = Int(readLine()!)!
for _ in 0..<n {
    let x = Int(readLine()!)!
    if x == 0 {
        print(maxHeap.pop() ?? 0)
    }
    else {
        maxHeap.insert(element: x)
    }
}
