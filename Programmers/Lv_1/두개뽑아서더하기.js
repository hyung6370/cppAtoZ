function solution(numbers) {
    let temp = [];

    for (let i = 0; i < numbers.length-1; i++) {
        for (let j = i+1; j < numbers.length; j++) {
            temp.push(numbers[i] + numbers[j]);
        }
    }

    const answer = [...new Set(temp)];

    return answer.sort((a, b) => a-b);
}

function solution2(numbers) {
    var answer = [];

    for (let i = 0; i < numbers.length; i++) {
        for (let j = 0; j < numbers.length; j++) {
            let sum = numbers[i] + numbers[j];
            
            if (answer.indexOf(sum) === -1) answer.push(sum);
        }
    }

    answer.sort((a, b) => a-b);
}