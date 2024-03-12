//
//  Animals.swift
//  ARC_Ex
//
//  Created by KIM Hyung Jun on 3/12/24.
//

import Foundation

class Animals {
    var name: String
    var doggy: Animals = Animals(name: "Van")
    
    init(name: String) {
        self.name = name
        print("\(name)이 init 되었습니다.")
    }
    
    deinit {
        print("\(name)이 deinit 되었습니다.")
    }
    
    
    
//    func makePet(_ origin: Animals) {
//        let cat = origin // cat이란 지역변수에 매개변수 값이 할당됨
//    }
//
//    var myCat: Animals = Animals(name: "Bebe")
//    // myCat이란 새로운 인스턴스를 생성함 RC +1
//    
//    makePet(myCat)
//    // makeCat 함수를 실행할 경우 -> makeCat 내부 cat 변수는 myCat을 참조하게 됨 (RC +1)
    
    
    var cow: Animals? = Animals(name: "Coby")
    // 옵셔널 타입의 cow를 생성 RC +1
    
    var neighborCow = cow
    // 기존 인스턴스를 할당받는 neighborCow란 새로운 변수 생성 RC +1
    
    // 둘다 Optional 타입이므로, nil 값으로 초기값을 해제할 수 있다.
    cow = nil // RC -1
    neighborCow = nil // RC -1
    // RC가 0으로, 메모리 상 해제되었으므로 deinit 메서드에 따라
    // 메시지가 log에 등장
}



