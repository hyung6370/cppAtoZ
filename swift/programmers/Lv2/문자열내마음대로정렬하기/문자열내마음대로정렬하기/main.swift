//
//  main.swift
//  문자열내마음대로정렬하기
//
//  Created by KIM Hyung Jun on 11/14/23.
//

import Foundation

func solution(_ strings: [String], _ n: Int) -> [String] {
    let answer: [String] = strings.sorted {
        let left: Character = $0[$0.index($0.startIndex, offsetBy: n)]
        let right: Character = $1[$1.index($1.startIndex, offsetBy: n)]
        
        if left == right {
            return $0 < $1
        }
        else {
            return left < right
        }
    }
    
    return answer
}

