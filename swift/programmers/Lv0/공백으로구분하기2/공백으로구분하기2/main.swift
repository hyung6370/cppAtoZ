//
//  main.swift
//  공백으로구분하기2
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ my_string: String) -> [String] {
    return my_string.split(separator: " ").map { String($0) }
}

