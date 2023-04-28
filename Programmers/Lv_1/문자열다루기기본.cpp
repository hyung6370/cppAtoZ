#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.size() == 4 || s.size() == 6) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') continue;
            else {
                return answer = false;
            }
            answer = true;
        }
    }
    else answer = false;

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