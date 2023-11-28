//
//  main.swift
//  꼬리문자열
//
//  Created by KIM Hyung Jun on 11/28/23.
//

import Foundation

func sollution(_ str_list: [String], _ ex: String) -> String {
    return str_list.reduce("") { $0 + ($1.contains(ex) ? "" : $1) }
}

