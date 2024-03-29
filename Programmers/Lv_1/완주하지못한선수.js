function solution(participant, completion) {
    participant.sort();
    completion.sort();

    for (let i = 0; i < participant.length; i++) {
        if (participant[i] !== completion[i]) {
            return participant[i];
        }
    }
}

function solution2(participant, completion) {
    let hashed = [];

    participant.forEach(entry => {
        hashed[entry] = hashed[entry] ? hashed[entry]+1 : 1;
    })

    completion.forEach(entry => {
        hashed[entry] = hashed[entry]-1;
    })

    for (let key in hashed) {
        if (hashed[key] >= 1) return key;
    }
}