function solution(num) {
    var answer = '';

    if (Math.abs(num % 2) === 1) answer = 'Odd';
    else answer = 'Even';

    return answer;
}