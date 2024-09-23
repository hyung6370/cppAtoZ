//
//  main.swift
//  Swift_1157
//
//  Created by KIM Hyung Jun on 9/23/24.
//

// [심화 1] 1157, 단어 공부

import Foundation

let s = readLine()!.uppercased()
let dict = Dictionary(s.map { ($0, 1) }, uniquingKeysWith: + )
let maxValue = dict.filter { $0.value == dict.values.max()! }

maxValue.count > 1 ? print("?") : print(maxValue.keys.first!)


// 다른 풀이
let s2 = readLine()!.uppercased()
var dict2: [Character: Int] = [:]

for w in s2 {
    if let value = dict2[w] {
        dict2[w] = value + 1
    } else {
        dict2[w] = 1
    }
}

dict2 = dict2.filter { $0.value == dict2.values.max()! }
dict2.count > 1 ? print("?") : print(dict2.keys.first!)
