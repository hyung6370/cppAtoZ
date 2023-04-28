function solution(s) {
    return s.split("").sort().reverse().join("");
}

// 예시는 정렬이 이미 되어있어서 다른 예시로. s = "DajBziAlC"
// s.split('') -> ['D', 'a', 'j', 'B', 'z', 'i', 'A', 'l', 'C']
// s.split('').sort() -> ['A', 'B', 'C', 'D', 'a', 'i', 'j', 'l', 'z']
// s.split('').sort().reverse() -> ['z', 'l', 'j', 'i', 'a', 'D', 'C', 'B', 'A']
// s.split('').sort().reverse().join('') -> zljiaDCBA
// 알파벳은 sort()를 할 경우, 자동으로 대문자가 먼저 A부터 Z로 정렬되고, 소문자가 a->z 로 정렬된다는 것을 잘 이용했다.