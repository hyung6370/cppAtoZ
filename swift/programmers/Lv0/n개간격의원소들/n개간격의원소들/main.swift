//
//  main.swift
//  n개간격의원소들
//
//  Created by KIM Hyung Jun on 11/24/23.
//

import Foundation

func solution(_ num_list: [Int], _ n: Int) -> [Int] {
    return stride(from: 0, to: num_list.count, by: n).map { num_list[$0] }
}

