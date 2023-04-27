function solution(X) {
    var answer = true;

    let s = String(X);
    let sum = 0;
    
    for (let i = 0; i < s.length; i++) {
        sum += (Number(s[i]));
    }

    if (X % sum !== 0) answer = false;

    return answer;
}