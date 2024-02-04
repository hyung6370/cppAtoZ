//
//  main.swift
//  11659
//
//  Created by KIM Hyung Jun on 2/4/24.
//

import Foundation

func solution() -> String {
    var input = readLine()!.split(separator: " ").map{ Int(String($0))! }
    let N = input[0]
    let M = input[1]
    
    let arr = readLine()!.split(separator: " ").map{ Int64(String($0))! }
    var psum = Array(repeating: arr[0], count: N)
    
    for i in 1..<N {
        psum[i] = psum[i-1] + arr[i]
    }
    
    var result = ""
    for _ in 0..<M {
        input = readLine()!.split(separator: " ").map{ Int(String($0))! }
        let a = input[0] - 1
        let b = input[1] - 1
        
        let sumFromAtoB = psum[b] - (a == 0 ? 0 : psum[a - 1])
        result.write("\(sumFromAtoB)")
    }
    
    return result
}

