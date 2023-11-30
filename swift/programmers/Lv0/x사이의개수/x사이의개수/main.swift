//
//  main.swift
//  x사이의개수
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ myString: String) -> [Int] {
    var arr = myString.map { String($0) }
    var ans = [Int]()
    var count = 0
    
    for i in 0..<arr.count {
        if arr[i] == "x" {
            ans.append(count)
            count = 0
        }
        else {
            count += 1
        }
    }
    ans.append(count)
    
    return ans
}

func solution2(_ myString: String) -> [Int] {
    return myString.split(separator: "x", omittingEmptySubsequences: false).map { String($0).count }
}
