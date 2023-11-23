//
//  main.swift
//  더크게합치기
//
//  Created by KIM Hyung Jun on 11/23/23.
//

import Foundation

func solution(_ a: Int, _ b: Int) -> Int {
    return max(Int(String(a) + String(b))!, Int(String(b) + String(a))!)
}


