function gcd(a, b) {
    let r;
    while (b !== 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

function solution(a, b) {
    let answer = 0;
    b /= gcd(a, b);

    while (1) {
        if (b % 2 === 0) b /= 2;
        else if (b % 5 === 0) b /= 5;
        else break;
    }

    if (b === 1) answer = 1;
    else answer = 2;

    return answer;
}