//
//  main.swift
//  순서바꾸기
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ numList: [Int], _ n: Int) -> [Int] {
    let index = n % numList.count
    return Array(numList[index...] + numList[..<index])
}

func solution2(_ numList: [Int], _ n: Int) -> [Int] {
    return Array((numList + numList)[n..<n + numList.count])
}
