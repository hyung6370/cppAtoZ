function solution(keymap, targets) {
    const answer = [];
    const map = new Map();

    for (const key of keymap) {
        for (let i = 0; i < key.length; i++) {
            if (!map.has(key[i]) || i+1 < map.get(key[i])) map.set(key[i], i+1);
        }
    }

    for (const target of targets) {
        let count = 0;
        for (let i = 0; i < target.length; i++) {
            count += map.get(target[i]);
        }
        answer.push(count || -1);
    }

    return answer;
}

function solution2(keymap, targets) {
    const answer = [];
    const map = [];

    for (const items of keymap) {
        items.split('').map((item, index) => map[item] = (map[item] < index+1 ? map[item] : index+1));
    }

    for (const items of targets) {
        answer.push(items.split('').reduce((cur, item) => cur += mpa[item], 0) || -1);
    }

    return answer;
}