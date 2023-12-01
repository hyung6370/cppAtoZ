//
//  main.swift
//  할일목록
//
//  Created by KIM Hyung Jun on 11/30/23.
//

import Foundation

func solution(_ todo_list: [String], _ finished: [Bool]) -> [String] {
    return finished.enumerated().filter { !$0.element }.map { todo_list[$0.offset] }
}

func solution2(_ todo_list: [String], _ finished: [Bool]) -> [String] {
    return zip(todo_list, finished).filter { !$0.1 }.map { $0.0 }
}
