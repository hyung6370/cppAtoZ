#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
    bool answer = true;
    int pCnt = 0, yCnt = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P') pCnt += 1;
        else if (s[i] == 'y' || s[i] == 'Y') yCnt += 1;
    }

    if (pCnt == yCnt) answer = true;
    else if (pCnt != yCnt || (pCnt == 0 && yCnt == 0)) answer = false;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    bool result;
    cin >> s;

    cout << solution(s);

    return 0;
}