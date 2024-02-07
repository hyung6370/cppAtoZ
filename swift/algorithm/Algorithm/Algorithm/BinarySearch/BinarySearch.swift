//
//  BinarySearch.swift
//  Algorithm
//
//  Created by KIM Hyung Jun on 2/7/24.
//

import Foundation

func binarySearch<T: Comparable>(_ arr: [T], target: T) -> Int? {
    var low = 0
    var high = arr.count-1
    
    while low <= high {
        let mid = (low + high) / 2
        if arr[mid] == target {
            return mid
        }
        else if arr[mid] < target {
            low = mid + 1
        }
        else {
            high = mid - 1
        }
    }
    
    return nil
}
