//
//  main.swift
//  문자열다루기기본
//
//  Created by KIM Hyung Jun on 12/4/23.
//

import Foundation

func solution(_ s: String) -> Bool {
    return (Int(s) != nil && (s.count == 4 || s.count == 6)) ? true : false
}

func solution2(_ s: String) -> Bool {
    if s.count == 4 || s.count == 6 {
        if Int(s) != nil {
            return true
        }
    }
    return false
}
