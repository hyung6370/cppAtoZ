function solution(N, stages) {
    let answer = [];
    let people = stages.length;
    
    for (let i = 1; i <= N+1; i++) {
        // Array.filter() : 조건을 만족하는 원소만 추출
        let tmp = stages.filter(n => n === i).length;

        // answer = [[stage, 실패율]]
        answer.push([i. tmp/people]);

        // 실패한 사람 제외
        people -= tmp;
    }

    // 마지막은 모두 깬 사람들이므로 실패율이 없어서 pop()
    answer.pop();

    // answer의 2번째 원소 기준으로 내림차순으로 정렬
    answer = answer.sort((a, b) => b[1]-a[1]);

    // Array.map(a => a[0])
    return answer.map(a => a[0]);
}