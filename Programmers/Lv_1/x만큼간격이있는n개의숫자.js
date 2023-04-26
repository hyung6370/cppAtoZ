function solution(x, n) {
    var answer = [];
    let xData = 0;

    for (let i = 0; i < n; i++) {
        xData += x;
        answer.push(xData);
    }

    return answer;
}