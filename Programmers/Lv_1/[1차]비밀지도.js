function solution(n, arr1, arr2) {
    return arr1.map((v, i) => addZero(n, (v | arr2[i]).toString(2)).replace(/1|0/g, a => +a ? '#' : ' '));
}

const addZero = (n, s) => {
    return '0'.repeat(n - s.length) + s;
}

var solution = (n, a, b) => a.map((a, i) => (a | b[i]).toString(2).padStart(n, 0).replace(/0/g, ' ').replace(/1/g, '#'));

function solution(n, arr1, arr2) {
    let num1, num2, s;
    let answer = [];

    for (let i = 0; i < n; i++) {
        num1 = arr1[i];
        num2 = arr2[i];
        s = '';

        for (let j = 0; j < n; j++) {
            s = (num1 % 2 + num2 % 2) ? '#'+s : ' ' + s;
            num1 = Math.floor(num1 / 2);
            num2 = Math.floor(num2 / 2);
        }
        answer.push(s);
    }
    return answer;
}