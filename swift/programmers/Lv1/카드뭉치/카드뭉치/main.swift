//
//  main.swift
//  카드뭉치
//
//  Created by KIM Hyung Jun on 12/15/23.
//

import Foundation

func solution(_ cards1: [String], _ cards2: [String], _ goal: [String]) -> String {
    var reverseCards1 = Array(cards1.reversed())
    var reverseCards2 = Array(cards2.reversed())
    
    for g in goal {
        if !reverseCards1.isEmpty && reverseCards1.last == g {
            reverseCards1.removeLast()
            continue
        }
        
        if !reverseCards2.isEmpty && reverseCards2.last == g {
            reverseCards2.removeLast()
            continue
        }
        
        return "No"
    }
    
    return "Yes"
}

