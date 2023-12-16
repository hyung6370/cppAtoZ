//
//  main.swift
//  2016년
//
//  Created by KIM Hyung Jun on 12/16/23.
//

import Foundation

func solution(_ a: Int, _ b: Int) -> String {
    let month = [ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    let day = ["THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"]
    
    let totalDay = month[0..<a-1].reduce(0, +) + b
    return day[totalDay % 7]
}

