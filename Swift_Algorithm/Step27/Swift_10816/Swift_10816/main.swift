//
//  main.swift
//  Swift_10816
//
//  Created by KIM Hyung Jun on 8/8/24.
//

import Foundation

let n = Int(readLine()!)!
var arr: [Int] = []
arr = readLine()!.split(separator: " ").map { Int($0)! }.sorted()

let m = Int(readLine()!)!
var targets: [Int] = []
targets = readLine()!.split(separator: " ").map { Int($0)! }

// 딕셔너리 초기화
var dict = [Int: Int]()
var result: [Int] = []

for i in arr {
    if dict.keys.contains(i) {
        dict[i]! += 1
    }
    else {
        dict[i] = 1
    }
}
print("dict : \(dict)")

for j in targets {
    if dict.keys.contains(j) {
        result.append(dict[j]!)
    }
    else {
        result.append(0)
    }
}

print(result.map { String($0) }.joined(separator: " "))


// --------------------------------------
let cardDict = Dictionary(readLine()!.split(separator: " ").map { (Int($0)!, 1) }, uniquingKeysWith: +)
let cardArray = readLine()!.split(separator: " ").map { Int($0)! }

for num in cardArray {
    print(cardDict[num, default: 0], terminator: " ")
}
// uniquingKeysWith 파라미터를 사용하여 초기화 시 중복 키를 처리한다.
// Dictionary 초기화 시 uniquingKeysWith: + 를 사용하여 중복된 키가 있을 경우 값을 더해준다.
