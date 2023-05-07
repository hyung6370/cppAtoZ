#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <regex>
using namespace std;

map<string, int> number = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<string, int>::iterator iter;

int solution(string s) {
    int answer = 0;

    for (iter = number.begin(); iter != number.end(); iter++) {
        int index = s.find(iter->first);

        if (index != -1) {
            s.replace(index, (iter->first).size(), to_string(iter->second));
        }

        // 이 코드가 없으면 해당 문자열의 첫번째 인덱스만 반환해주는 replace 특징 때문에,
        // 1zerotowzero3 => 10203 이렇게 해당하는 문자열이 2개 이상 있는 경우를
        // 처리를 못해서 불통됨...
        if (s.find(iter->first) != -1) iter--;
    }
    answer = stoi(s);

    return answer;
}

int solution2(string s) {
    int answer = 0;

    s = regex_replace(s, regex("zero"), "0");
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");

    return stoi(s);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    cout << solution(s);

    return 0;
}