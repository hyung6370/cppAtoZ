//
//  main.swift
//  Swift_25501
//
//  Created by KIM Hyung Jun on 8/21/24.
//

import Foundation

func recursion(_ s: [Character], _ l: Int, _ r: Int, _ cc: Int) -> (Int, Int) {
    if l >= r { return (1, cc) }
    if s[l] != s[r] { return (0, cc) }
    return recursion(s, l+1, r-1, cc+1)
}

let t = Int(readLine()!)!

for _ in 0..<t {
    let s = readLine()!.map { $0 }
    let ans = recursion(s, 0, s.count-1, 1)
    print(ans.0, ans.1)
}
