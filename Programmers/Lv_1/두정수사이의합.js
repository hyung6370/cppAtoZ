function solution(a, b) {
    var answer = 0;

    if (a > b) {
        for (let i = b; i <= a; i++) {
            answer += i;
        }
    }
    if (b > a) {
        for (let i = a; i <= b; i++) {
            answer += i;
        }
    }
    if (a === b) answer = a;

    return answer;
}

function solution2(a, b) {
    var answer = 0;

    answer = (a + b) * (Math.abs(b - a) + 1) / 2;

    return answer;
}

function solution3(a, b) {
    var answer = 0;
    var min = Math.min(a, b);
    var max = Math.max(a, b);

    for (var i = min; i <= max; i++) answer += i;

    return answer;
}