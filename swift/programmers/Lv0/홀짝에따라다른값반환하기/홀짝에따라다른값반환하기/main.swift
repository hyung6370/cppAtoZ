//
//  main.swift
//  홀짝에따라다른값반환하기
//
//  Created by KIM Hyung Jun on 11/23/23.
//

import Foundation

func solution(_ n: Int) -> Int {
    if n % 2 == 0 { return stride(from: 2, through: n, by: 2).reduce(0) { $0 + $1 * $1 } }
    // stride 함수는 2부터 시작하여 n까지 2씩 증가하는 범위를 생성한다. 즉, n 이하의 모든 짝수를 포함한다.
    // reduce 메소드는 이 범위에 있는 각 숫자에 대해 제곱을 하고 이들을 모두 더한다.
    // $0은 누적값, $1은 현재 요소를 나타낸다
    
    else { return stride(from: 1, through: n, by: 2).reduce(0, +) }
}

