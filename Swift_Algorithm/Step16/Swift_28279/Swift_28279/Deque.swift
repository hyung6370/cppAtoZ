//
//  Deque.swift
//  Swift_28279
//
//  Created by KIM Hyung Jun on 10/9/24.
//

import Foundation

struct Deque<T> {
    var enqueue: [T]
    var dequeue: [T] = []

    init(enqueue: [T]) {
        self.enqueue = enqueue
    }
    var count: Int {
        return enqueue.count + dequeue.count
    }
    var isEmpty: Bool {
        return enqueue.isEmpty && dequeue.isEmpty
    }

    mutating func first() -> T? {
        if dequeue.isEmpty {
            dequeue = enqueue.reversed()
            enqueue.removeAll()
        }
        return dequeue.last
    }
    mutating func last() -> T? {
        if enqueue.isEmpty {
            if dequeue.isEmpty {
                return nil
            } else {
                return dequeue[0]
            }
        } else {
            return enqueue.last
        }
    }
    mutating func pushFront(_ element: T) {
        dequeue.append(element)
    }
    mutating func pushRear(_ element: T) {
        enqueue.append(element)
    }
    mutating func popFront() -> T? {
        if dequeue.isEmpty {
            dequeue = enqueue.reversed()
            enqueue.removeAll()
        }
        return dequeue.popLast()
    }
    mutating func popRear() -> T? {
        if enqueue.isEmpty {
            enqueue = dequeue.reversed()
            dequeue.removeAll()
        }
        return enqueue.popLast()
    }
}
