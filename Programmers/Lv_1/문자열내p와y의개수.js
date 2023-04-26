function solution(s) {
    var answer = true;
    let pCnt = 0, yCnt = 0;

    for (let i = 0; i < s.length; i++) {
        if (s[i] === 'p' || s[i] === 'P') pCnt += 1;
        else if (s[i] === 'y' || s[i] === 'Y') yCnt += 1;
    }

    if (pCnt === yCnt) answer = true;
    else if (pCnt !== yCnt || (pCnt === 0 && yCnt === 0)) answer = false;


    return answer;
}