#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution (int i, int j, int k) {
    int answer = 0;

    for (int n = i; n <= j; n++) {
        string s = to_string(n);
        for (int m = 0; m < s.size(); m++) {
            if (s[m]-'0' == k) answer++;
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, j, k;
    cin >> i >> j >> k;

    cout << solution(i, j ,k);

    return 0;
}