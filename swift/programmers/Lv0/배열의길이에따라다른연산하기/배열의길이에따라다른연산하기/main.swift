//
//  main.swift
//  배열의길이에따라다른연산하기
//
//  Created by KIM Hyung Jun on 11/25/23.
//

import Foundation

func solution(_ arr: [Int], _ n: Int) -> [Int] {
    return arr.enumerated().map {
        if arr.count % 2 == 1 {
            return $0.offset % 2 == 0 ? $0.element + n : $0.element
        }
        else {
            return $0.offset % 2 == 1 ? $0.element + n : $0.element
        }
    }
}

