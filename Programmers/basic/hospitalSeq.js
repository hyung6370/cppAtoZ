function solution(emergency) {
    // 복사한 배열을 내림차순
    const copiedEmergency = [...emergency].sort((a, b) => b-a);

    // 진료 순위를 기록할 배열을 만든다
    let rankArr = new Array(emergency.length).fill(0);

    // 진료 순위
    let count = 1;

    for (let i = 0; i < emergency.length; i++) {
        // 내림차순된 배열은 가장 우선 순위가 높은 사람이 맨 앞에 있으므로,
        // 원본 배열에서 그 사람의 인덱스를 찾는다
        let index = emergency.indexOf(copiedEmergency[i]);

        // 진료 순위 배열에서 해당 인덱스 자리에 진료 순위를 기록한다
        rankArr.splice(index, 1, count);

        // 진료 순위를 증가시킨다
        count++;
    }

    return rankArr;
}