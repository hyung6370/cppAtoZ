#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solution(int x) {
    bool answer = true;

    string s = to_string(x);
    int sum = 0;

    for (int i = 0; i < s.size(); i++) {
        sum += (s[i]-'0');
    }

    if (x % sum != 0) answer = false;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr;
    cin >> arr;
    cout << solution(arr);

    return 0;
}