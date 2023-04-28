function gcd(a, b) {
    let c;
    while (b !== 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

function lcm(a, b) {
    return a * b / gcd(a, b);
}

function solution(n, m) {
    var answer = [];

    answer.push(gcd(n, m));
    answer.push(lcm(n, m));

    return answer;
}