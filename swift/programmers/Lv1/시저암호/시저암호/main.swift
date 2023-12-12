//
//  main.swift
//  시저암호
//
//  Created by KIM Hyung Jun on 12/11/23.
//

import Foundation

func solution(_ s: String, _ n: Int) -> String {
    return s.utf8.map {
        var code = Int($0)
        
        switch code {
        case 65...90:
            code = (code + n - 65) % 26 + 65
        case 97...122:
            code = (code + n - 97) % 26 + 97
        default:
            break
        }
        
        return String(UnicodeScalar(code)!)
    }.joined()
}

func solution2(_ s: String, _ n: Int) -> String {
    let alphabets = "abcdefghijklmnopqrstuvwxyz".map { $0 }
    
    return String(s.map {
        guard let index = alphabets.firstIndex(of: Character($0.lowercased())) else { return $0 }
        let letter = alphabets[(index + n) % alphabets.count]
        
        return $0.isUppercase ? Character(letter.uppercased()) : letter
    })
}
