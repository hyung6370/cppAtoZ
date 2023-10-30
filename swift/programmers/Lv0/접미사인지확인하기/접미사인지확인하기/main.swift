//
//  main.swift
//  접미사인지확인하기
//
//  Created by KIM Hyung Jun on 10/28/23.
//

import Foundation

func solution(_ my_string: String, _ is_suffix: String) -> Int {
    return my_string.suffix(is_suffix.count) == is_suffix ? 1 : 0
}

