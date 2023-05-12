function solution(nums) {
    let answer = [];
    const max = nums.length / 2;

    nums.map(num => (
        answer.length < max && !answer.includes(num) ? answer.push(num) : num
    ));

    return answer.length;
}

function solution2(nums) {
    let answer = [...new Set(nums)],
        limit = nums.length / 2;

    return answer.length > limit ? limit : answer.length;
}