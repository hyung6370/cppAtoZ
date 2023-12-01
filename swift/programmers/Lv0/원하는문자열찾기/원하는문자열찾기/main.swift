//
//  main.swift
//  원하는문자열찾기
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ myString: String, _ pat: String) -> Int {
    return myString.lowercased().contains(pat.lowercased()) ? 1 : 0
}

