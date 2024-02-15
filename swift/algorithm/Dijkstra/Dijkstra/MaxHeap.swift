//
//  MaxHeap.swift
//  Dijkstra
//
//  Created by KIM Hyung Jun on 2/15/24.
//

import Foundation

struct MaxHeap<T: Comparable> {
    var heap: Array<T> = []
    
    init(_ data: T) {
        heap.append(data)
        heap.append(data)
    }
    
    mutating func insert(_ data: T) {
        if heap.isEmpty {
            heap.append(data)
            heap.append(data)
            return
        }
        heap.append(data)
        
        func isMoveUp(_ insertIndex: Int) -> Bool {
            if insertIndex <= 1 {
                return false
            }
            let parentIndex: Int = insertIndex / 2
            return heap[insertIndex] > heap[parentIndex] ? true : false
        }
        
        var insertIndex: Int = heap.count - 1
        while isMoveUp(insertIndex) {
            let parentIndex: Int = insertIndex / 2
            heap.swapAt(insertIndex, parentIndex)
            insertIndex = parentIndex
        }
    }
    
    enum moveDownStatus { case left, right, none }
    
    mutating func pop() -> T? {
        if heap.count <= 1 { return nil }
        
        let returnData = heap[1]
        heap.swapAt(1, heap.count - 1)
        heap.removeLast()
        
        func moveDown(_ poppedIndex: Int) -> moveDownStatus {
            let leftChildIndex = (poppedIndex * 2)
            let rightChildIndex = leftChildIndex + 1
            
            // case 1, 모든(왼쪽) 자식 노드가 없는 경우 (완전이진트리는 왼쪽부터 채워지므로)
            if leftChildIndex >= (heap.count) {
                return .none
            }
            
            // case 2, 왼쪽 자식 노드만 있는 경우
            if rightChildIndex >= (heap.count) {
                return heap[leftChildIndex] > heap[poppedIndex] ? .left : .none
            }
            
            // case 3, 왼쪽 & 오른쪽 자식 노드 모두 있는 경우
            // case 3-1, 자식들이 자신보다 모두 작은 경우
            if (heap[leftChildIndex] < heap[poppedIndex]) && (heap[rightChildIndex] < heap[poppedIndex]) {
                return .none
            }
            
            // case 3-2, 자식들이 자신보다 모두 큰 경우 (왼쪽과 오른쪽 자식 중 더 큰 자식 선별)
            if (heap[leftChildIndex] > heap[poppedIndex]) && (heap[rightChildIndex] > heap[poppedIndex]) {
                return heap[leftChildIndex] > heap[rightChildIndex] ? .left : .right
            }
            
            // case 3-3, 왼쪽 & 오른쪽 중 한 자식만 자신보다 큰 경우
            return heap[leftChildIndex] > heap[poppedIndex] ? .left : .right
        }
        
        var poppedIndex = 1
        while true {
            switch moveDown(poppedIndex) {
            case .none:
                return returnData
            case .left:
                let leftChildIndex = poppedIndex * 2
                heap.swapAt(poppedIndex, leftChildIndex)
                poppedIndex = leftChildIndex
            case .right:
                let rightChildIndex = (poppedIndex * 2) + 1
                heap.swapAt(poppedIndex, rightChildIndex)
                poppedIndex = rightChildIndex
            }
        }
    }
    
    func isEmpty() -> Bool {
        return heap.count <= 1 ? true : false
    }
}
