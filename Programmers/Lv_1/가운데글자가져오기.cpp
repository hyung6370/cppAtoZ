#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    string answer = "";

    if (s.size() % 2 == 1) {
        answer += s[s.size() / 2];
    }
    else {
        answer += s[s.size() / 2 -1];
        answer += s[s.size() / 2];
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    cout << solution(s);

    return 0;
}