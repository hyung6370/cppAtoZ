//
//  main.swift
//  Swift_10815
//
//  Created by KIM Hyung Jun on 7/10/24.
//

import Foundation

let N = Int(readLine()!)!
var arr = Set(readLine()!.split(separator: " ").map { Int($0)! })
let M = Int(readLine()!)!
var arr2 = readLine()!.split(separator: " ").map { Int($0)! }

for i in arr2{
    print(arr.contains(i) ? 1 : 0, terminator: " ")
}

// 여기서 set이 아닌 array를 사용할 경우 contains가 O(n)이고,
// 최악의 경우 contains 연산을 50만번 하게 되므로, 시간초과가 난다.

// 여기서 Set을 사용한다면 이분탐색을 사용해도 최악의 경우에 50만*O(logN)이므로 통과가 가능
