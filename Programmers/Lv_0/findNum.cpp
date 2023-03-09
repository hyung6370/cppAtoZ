#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++) {
        if (k == s[i]-'0') {
            answer = i+1;
            break;
        }
        else answer = -1;
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, k;
    cin >> num >> k;

    cout << solution(num, k);

    return 0;
}
