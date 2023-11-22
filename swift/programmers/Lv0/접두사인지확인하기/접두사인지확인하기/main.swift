//
//  main.swift
//  접두사인지확인하기
//
//  Created by KIM Hyung Jun on 11/22/23.
//

import Foundation

func solution(_ my_string: String, _ is_prefix: String) -> Int {
    return my_string.prefix(is_prefix.count) == is_prefix ? 1 : 0
}

