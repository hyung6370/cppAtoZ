function solution(babbling) {
    const word = ['aya', 'ye', 'woo', 'ma'];
    let count = 0;

    for (let i = 0; i < babbling.length; i++) {
        let babble = babbling[i];

        for (let j = 0; j < word.length; j++) {
            if (babble.includes(word[j].repeat(2))) break;

            babble = babble.split(word[j]).join(" ");
        }

        if (babble.split(" ").join("").length === 0) count += 1;
    }

    return count;
}