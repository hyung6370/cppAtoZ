//
//  main.swift
//  K번째수
//
//  Created by KIM Hyung Jun on 12/13/23.
//

import Foundation

func solution(_ array: [Int], _ commands: [[Int]]) -> [Int] {
    return commands.map({ (key) in
        return array[(key[0]-1)...(key[1]-1)].sorted()[key[2]-1]
    })
}

func solution2(_ array: [Int], _ commands: [[Int]]) -> [Int] {
    var result = [Int]()
    
    for temp in commands {
        let i = temp[0]-1
        let j = temp[1]-1
        let k = temp[2]-1
        
        var tempArr = array[i...j]
        tempArr.sort{$0 < $1}
        
        let tempArr2 = Array(tempArr)
        result.append(tempArr2[k])
    }
    
    return result
}
