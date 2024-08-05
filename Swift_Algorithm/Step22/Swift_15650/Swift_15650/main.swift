//
//  main.swift
//  Swift_15650
//
//  Created by KIM Hyung Jun on 8/5/24.
//

// 15650번, N과 M(2)

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0], m = input[1]

func dfs(nums: [Int], index: Int) {
    if nums.count == m {
        nums.forEach { print($0, terminator: " ") }
        print()
        return
    }
    if index > n { return }
    
    for i in index...n {
        dfs(nums: nums+[i], index: i+1)
    }
}

dfs(nums: [], index: 1)

// dfs 함수 내에서 index를 기준으로 반복을 진행하면서 각 숫자를 추가하고,
// 길이가 m에 도달하면 조합을 출력한다.
// 만약 index가 n을 초과하면 더 이상 탐색하지 않고 이전 상태로 돌아간다.
// 이를 통해 효율적으로 모든 조합을 생성할 수 있다.
// 백트래킹을 사용하면 불필요한 경로를 탐색하지 않으므로 시간과 메모리를 절약할 수 있다.
