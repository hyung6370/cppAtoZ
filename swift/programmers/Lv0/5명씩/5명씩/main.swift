//
//  main.swift
//  5명씩
//
//  Created by KIM Hyung Jun on 11/26/23.
//

import Foundation

func solution(_ names: [String]) -> [String] {
    return names.enumerated().filter {
        $0.offset % 5 == 0
    }.map { $0.element }
}

func solution2(_ names: [String]) -> [String] {
    return stride(from: 0, to: names.count, by: 5).map { names[$0] }
}
