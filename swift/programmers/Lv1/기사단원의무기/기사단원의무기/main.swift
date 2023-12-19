//
//  main.swift
//  기사단원의무기
//
//  Created by KIM Hyung Jun on 12/19/23.
//

import Foundation

func solution(_ number: Int, _ limit: Int, _ power: Int) -> Int {
    var attack = [Int](repeating: 0, count: number+1)
    
    for i in 1...number {
        var c = i
        
        while c <= number {
            attack[c] += 1
            c += 1
        }
    }
    
    attack = attack.map { $0 > limit ? power : $0 }
    return attack.reduce(0, +)
}

