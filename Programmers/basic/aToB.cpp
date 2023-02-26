#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string before, string after) {
    int answer = 1;

    sort(before.begin(), before.end());
    sort(after.begin(), after.end());

    if (before == after) answer = 1;
    else answer = 0;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string before, after;
    cin >> before >> after;

    cout << solution(before, after);

    return 0;
}