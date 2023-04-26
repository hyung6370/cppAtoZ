function solution(n) {
    return n.toString().split('').reverse().map(o => o = parseInt(o));
}

function solution2(n) {
    return String(n).split('').reverse().map(Number);
}