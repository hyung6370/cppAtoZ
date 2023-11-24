//
//  main.swift
//  뒤에서5등위로
//
//  Created by KIM Hyung Jun on 11/24/23.
//

import Foundation

func solution(_ a: [Int]) -> [Int] {
    a.sorted()[5..<a.count].map { Int($0) }
}

