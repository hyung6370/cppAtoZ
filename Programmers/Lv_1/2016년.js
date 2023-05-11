function solution1(a, b) {
    let week = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"];
    let dateStr = "2016-" + a + "- " + b;
    let date = new Date(dateStr);

    return week[date.getDay()];
}

function solution2(a, b) {
    let arr = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let week = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"];

    let passedDays = 0;

    for (let i = 1; i < a; i++) passedDays += arr[i];

    passedDays += b-1;

    return week[(5 + passedDays) % 7];
}

function solution3(a, b) {
    var date = new Date(2016, (a-1), b);
    return date.toString().slice(0, 3).toUpperCase();
}