//
//  main.swift
//  Swift_2798
//
//  Created by KIM Hyung Jun on 7/8/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let N = input[0], M = input[1]
let cards = readLine()!.split(separator: " ").map { Int($0)! }
print(blackJack(N, M, cards))

func blackJack(_ N: Int, _ M: Int, _ cards: [Int]) -> Int {
    var maxSum = 0
    for i in 0..<N {
        for j in i+1..<N {
            for k in j+1..<N {
                let sum = cards[i] + cards[j] + cards[k]
                
                if sum <= M && maxSum < sum {
                    maxSum = sum
                }
            }
        }
    }
    
    return maxSum
}


