//
//  main.swift
//  배열비교하기
//
//  Created by KIM Hyung Jun on 11/23/23.
//

import Foundation

func solution(_ arr1: [Int], _ arr2: [Int]) -> Int {
    let arr1Count = arr1.count
    let arr2Count = arr2.count
    
    switch (arr1Count, arr2Count) {
    case (let x, let y) where x > y:
        return 1
    case (let x, let y) where x < y:
        return -1
    case (let x, let y) where arr1.reduce(0, +) > arr2.reduce(0, +):
        return 1
    case (let x, let y) where arr1.reduce(0, +) < arr2.reduce(0, +):
        return -1
    default:
        return 0
    }
}

