//
//  main.swift
//  Swift_2231
//
//  Created by KIM Hyung Jun on 8/1/24.
//

import Foundation

let n = Int(readLine()!)!
var answer = 0

for i in 1...n {
    if "\(i)".map({ Int(String($0))! }).reduce(0, +) + i == n {
        answer = i
        break
    }
}
print(answer)

// Int 형 i를 "\(i)" 이렇게 해주면 문자열로 변환할 수 있다.

// map({ Int(String($0))! }) 은 문자열의 각 문자를 다시 정수로 변환하여 배열로 만든다.
// 여기서 각 문자는 i의 각 자리 숫자를 나타낸다.
