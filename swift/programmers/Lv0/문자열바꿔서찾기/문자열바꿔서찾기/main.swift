//
//  main.swift
//  문자열바꿔서찾기
//
//  Created by KIM Hyung Jun on 11/25/23.
//

import Foundation

func solution(_ myString: String, _ pat: String) -> Int {
    myString.map { $0 == "A" ? "B" : "A" }.joined().contains(pat) ? 1 : 0
}

