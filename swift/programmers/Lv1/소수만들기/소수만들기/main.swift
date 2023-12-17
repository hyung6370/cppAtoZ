//
//  main.swift
//  소수만들기
//
//  Created by KIM Hyung Jun on 12/17/23.
//

import Foundation

func solution(_ nums: [Int]) -> Int {
    var count = 0
    
    let combi = combination(nums, 3)
    
    for c in combi {
        let sum = c.reduce(0, +)
        if checkPrime(sum) {
            count += 1
        }
    }
    return count
}

func combination<T>(_ elements: [T], _ k: Int) -> [[T]] {
    var result = [[T]]()
    
    func combi(_ index: Int, _ now: [T]) {
        if now.count == k {
            result.append(now)
            return
        }
        
        for i in index..<elements.count {
            combi(i+1, now+[elements[i]])
        }
    }
    combi(0, [])
    return result
}

func checkPrime(_ num: Int) -> Bool {
    var index: Int = 0
    for i in 2...num {
        if num % i == 0 {
            index = i
            break
        }
    }
    
    if index == num {
        return true
    }
    return false
}
