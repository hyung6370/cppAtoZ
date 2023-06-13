#include <iostream>
#include <string>
using namespace std;

int solution(string s) {
    int answer = 0;
    string num;
    bool isMinus = false;

    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == '-' || s[i] == '+' || i == s.size()) {
            if (isMinus) {
                answer -= stoi(num);
                num = "";
            }
            else {
                answer += stoi(num);
                num = "";
            }
        }
        else num += s[i];

        if (s[i] == '-') isMinus = true;
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