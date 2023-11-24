//
//  main.swift
//  배열에서문자열대소문자변환하기
//
//  Created by KIM Hyung Jun on 11/24/23.
//

import Foundation

func solution(_ strArr: [String]) -> [String] {
    return strArr.enumerated().map { $0.offset % 2 != 0 ? $0.element.uppercased() : $0.element.lowercased() }
}

