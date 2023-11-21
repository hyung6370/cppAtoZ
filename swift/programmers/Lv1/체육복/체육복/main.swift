//
//  main.swift
//  체육복
//
//  Created by KIM Hyung Jun on 11/21/23.
//

import Foundation

func solution(_ n: Int, _ lost: [Int], _ reserve: [Int]) -> Int {
    let newReserve = reserve.filter { !lost.contains($0) }
    let newLost = lost.filter { !reserve.contains($0) }
    
    var lostPeople: Int = newLost.count
    
    newReserve.forEach {
        let isLend: Bool = newLost.contains($0 - 1) || newLost.contains($0 + 1)
        if isLend && lostPeople > 0 {
            lostPeople -= 1
        }
    }
    
    return n - lostPeople
}
