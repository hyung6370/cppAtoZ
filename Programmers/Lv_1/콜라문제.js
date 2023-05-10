function solution(a, b, n) {
    let answer = 0;

    while (1) {
        if (n < a) break;
        answer += ((n / a) * b);
        n = (n / a) * b + (n % a);
    }

    return answer;
}