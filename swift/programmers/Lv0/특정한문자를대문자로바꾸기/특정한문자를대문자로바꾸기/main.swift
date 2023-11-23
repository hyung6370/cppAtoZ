//
//  main.swift
//  특정한문자를대문자로바꾸기
//
//  Created by KIM Hyung Jun on 11/23/23.
//

import Foundation

func solution(_ my_string: String, _ alp: String) -> String {
    return my_string.map { String($0) == alp ? $0.uppercased() : $0.lowercased() }.joined()
}

