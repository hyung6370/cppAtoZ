//
//  main.swift
//  Swift_2750
//
//  Created by KIM Hyung Jun on 7/9/24.
//

import Foundation

//let N = Int(readLine()!)!
//var arr: [Int] = []
//
//for _ in 0..<N {
//    let num = Int(readLine()!)!
//    arr.append(num)
//}
//
//arr.sort()
//for i in 0..<arr.count {
//    print(arr[i])
//}

// map 사용한다면 더 코드를 줄일 수 있다!

let N = Int(readLine()!)!
var arr = (0..<N).map { _ in Int(readLine()!)! }

arr.sort()
arr.forEach { print($0) }
