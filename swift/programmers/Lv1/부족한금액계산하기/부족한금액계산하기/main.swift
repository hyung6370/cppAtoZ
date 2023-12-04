//
//  main.swift
//  부족한금액계산하기
//
//  Created by KIM Hyung Jun on 12/4/23.
//

import Foundation

func solution(_ price: Int, _ money: Int, _ count: Int) -> Int {
    return max((count + 1) * count / 2 * price - money, 0)
}

func solution2(_ price: Int, _ money: Int, _ count: Int) -> Int64 {
    let totalPrice = price * (count * (count+1) / 2)
    
    if money >= totalPrice {
        return 0
    }
    
    return Int64(totalPrice - money)
}
