//
//  main.swift
//  문자열내p와y의개수
//
//  Created by KIM Hyung Jun on 11/1/23.
//

import Foundation

func solution(_ s: String) -> Bool {
    let answer = s.lowercased()
    
    return answer.components(separatedBy: "p").count == answer.components(separatedBy: "y").count
}

