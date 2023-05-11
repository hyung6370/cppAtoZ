function solution(name, yearning, photo) {
    const memory = {};
    for (let i = 0; i < name.length; i++) {
        memory[name[i]] = yearning[i];
    }

    // 각 포토 마다의 점수를 배열로 구해야 하므로 map을 이용
    return photo.map((arr) => {

        // 각 요소 배열을 reduce를 이용해 점수를 구한다.
        // memory 객체에 해당 사람이 있으면 점수를, 없으면 0을 더해준다.
        arr.reduce((acc, cur) => acc + (memory[cur] || 0), 0)
    });
}