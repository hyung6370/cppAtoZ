function solution(S) {
    if (S.length === 4 || S.length === 6) {
        // 모든 요소가 number이면 true 리턴
        return S.split("").every(c => !isNaN(c));
    }
    else return false;
}