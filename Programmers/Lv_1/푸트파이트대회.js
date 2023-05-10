function solution(food) {
    let answer = "";

    for (let i = 0; i < food.length; i++) {
        answer += String(o).repeat(Math.floor(food[i]/2));
    }

    return answer + "0" + [...answer].reverse().join("");
}

/*
ex) repeat 함수

const mood = "Happy! ";

console.log(`I feel ${mood.repeat(3)}`);

// output
"I feel Happy! Happy! Happy!"

*/