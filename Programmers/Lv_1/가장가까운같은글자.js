function solution(s) {
    let stack = [];
    let ans = [];

    for (let i = 0; i < s.length; i++) {
        if (!stack.includes(s[i])) {
            ans.push(-1);
            stack.push(s[i]);
            continue;
        }

        if (stack.includes(s[i])) {
            ans.push(stack.length - stack.lastIndexOf(s[i]));
            stack.push(s[i]);
            continue;
        }
    }
    return ans;
}


// 고차함수
function solution2(s) {
    let stack = [];
    let ans = [];

    [...s].forEach((str) => {
        if (!stack.includes(str)) ans.push(-1);
        if (stack.includes(str)) ans.push(stack.length - stack.lastIndexOf(str));

        stack.push(str);
    })

    return ans;
}