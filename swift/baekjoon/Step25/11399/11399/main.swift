//
//  main.swift
//  11399
//
//  Created by KIM Hyung Jun on 4/1/24.
//

import Foundation

if let N = readLine().flatMap(Int.init) {
    let num = readLine()?.split(separator: " ").compactMap { Int($0) }.sorted() ?? []
    
    var tot = 0, res = 0
    var nums = [Int]()
    
    for i in num {
        tot += i
        nums.append(tot)
    }
    
    for i in nums {
        res += i
    }
    
    print(res)
}
