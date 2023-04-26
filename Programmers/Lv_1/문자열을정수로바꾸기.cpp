#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = stoi(s);

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