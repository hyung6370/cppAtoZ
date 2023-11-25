//
//  main.swift
//  0떼기
//
//  Created by KIM Hyung Jun on 11/25/23.
//

import Foundation

func solution(_ a: String) -> String {
    String(a.suffix(from: a.firstIndex { $0 != "0" }!))
}

