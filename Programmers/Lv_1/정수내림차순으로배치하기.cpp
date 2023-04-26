#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = "";
    vector<int> v;
    while (n > 0) {
        v.push_back(n % 10);
        n /= 10;
    }

    sort(v.begin(), v.end(), greater<>());

    for (int i = 0; i < v.size(); i++) {
        s += to_string(v[i]);
    }
    answer = stoll(s);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    cout << solution(n);

    return 0;
}