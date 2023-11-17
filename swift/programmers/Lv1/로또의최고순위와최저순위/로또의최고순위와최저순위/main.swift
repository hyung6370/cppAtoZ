//
//  main.swift
//  로또의최고순위와최저순위
//
//  Created by KIM Hyung Jun on 11/17/23.
//

import Foundation

func solution(_ lottos: [Int], _ win_nums: [Int]) -> [Int] {
    
    let zeroCount = lottos.filter { $0 == 0 }.count
    let winCount: Int = win_nums.filter { lottos.contains($0) }.count
    
    return [min(7 - winCount - zeroCount, 6), min(7 - winCount, 6)]
}

func solution2(_ lottos: [Int], _ win_nums: [Int]) -> [Int] {
    func getRanking(_ num: Int) -> Int {
        switch num {
        case 6: return 1
        case 5: return 2
        case 4: return 3
        case 3: return 4
        case 2: return 5
        default: return 6
        }
    }
    
    var ans = 0
    var zero = 0
    
    var sorted_lottos = lottos.sorted(by: > )
    
    for lottos in sorted_lottos {
        if win_nums.contains(lottos) {
            ans += 1
        }
        else if lottos == 0 {
            zero += 1
        }
    }
    
    return [getRanking(ans + zero), getRanking(ans)]
}
