const solution = (my_string) => {
    let answer = "";
    answer = my_string.toLowerCase().split("").sort().join("");
    return answer;
};