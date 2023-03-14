function solution(s) {
    const input = s.split(" ");

    let stack = [];

    for (let index = 0; index < input.length; index++) {
        if (input[index] === "Z") {
            stack.pop();
            continue;
        }
        stack.push(input[index]);
    }
    
    const sum = stack.reduce((acc, curr) => {
        return acc + Number(curr);
    }, 0);

    return sum;
}