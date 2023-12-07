//
//  main.swift
//  이상한문자만들기
//
//  Created by KIM Hyung Jun on 12/6/23.
//

import Foundation

func solution(_ s: String) -> String {
    let a = s.components(separatedBy: " ").map { $0.enumerated().map { $0.offset % 2 == 0 ? $0.element.uppercased() : $0.element.lowercased() } }
    
    return a.map { $0.map { $0 }.joined() }.joined(separator: " ")
}

