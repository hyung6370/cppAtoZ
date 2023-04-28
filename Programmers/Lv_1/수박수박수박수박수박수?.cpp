#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(int n) {
    string answer = "";

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) answer += "수";
        else answer += "박";
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << solution(n);

    return 0;
}