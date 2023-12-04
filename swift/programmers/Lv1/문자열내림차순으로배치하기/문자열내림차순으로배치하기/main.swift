//
//  main.swift
//  문자열내림차순으로배치하기
//
//  Created by KIM Hyung Jun on 12/4/23.
//

import Foundation

func solution(_ s: String) -> String {
    return String(s.sorted { $0 > $1 })
}

