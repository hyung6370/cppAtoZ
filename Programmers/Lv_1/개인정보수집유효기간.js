function solution(today, terms, privacies) {
    let answer = [];
    let [year, month, date] = today.split(".").map(Number);
    let todates = year*12*28 + month*28 + data;
    let t = {};

    terms.forEach((e) => {
        let [a, b] = e.split(" ");
        t[a] = Number(b);
    });

    privacies.forEach((e, i) => {
        let [day, term] = e.split(" ");
        day = day.split(".").map(Number);

        let dates = day[0]*12*28 + day[1]*28 + day[2] + t[term]*28;
        
        if (dates <= todates) answer.push(i+1);
    });

    return answer;
}