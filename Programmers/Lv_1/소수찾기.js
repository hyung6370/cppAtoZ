function solution(n) {
    let answer = 0;
    const arr = new Array(n+1).fill(true);

    for (let i = 2; i <= n; i++) {
        if (arr[i] === false) continue;

        for (let j = j+j; j <= n; j+=i) {
            arr[j] = false;
        }
    }

    for (let i = 2; i <= n; i++) {
        if (arr[i] === true) answer++;
    }

    return answer;
}