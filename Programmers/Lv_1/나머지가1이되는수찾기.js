function solution(n) {
    var answer = 0;
    var arr = [];

    for (let i = 1; i < n; i++) {
        if (n % i === 1) arr.push(i);
    }
    answer = arr[0];

    return answer;
}