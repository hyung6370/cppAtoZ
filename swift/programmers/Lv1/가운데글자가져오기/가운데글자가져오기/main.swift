//
//  main.swift
//  가운데글자가져오기
//
//  Created by KIM Hyung Jun on 12/1/23.
//

import Foundation

func solution(_ s: String) -> String {
    return String(s[String.Index(encodedOffset: (s.count-1)/2)...String.Index(encodedOffset: s.count/2)])
}

