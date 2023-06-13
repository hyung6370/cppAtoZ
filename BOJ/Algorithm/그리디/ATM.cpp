#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int solution(int N, vector<int> Pi) {
    int answer = 0, result = 0;

    map<int, int> m;
    for (int i = 1; i <= N; i++) m[i] = Pi[i-1];
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    

    for (auto iter : v) {
        answer += iter.second;
        result += answer;
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, data;
    vector<int> Pi;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> data;
        Pi.push_back(data);
    }

    cout << solution(N, Pi);

    return 0;
}

/*
// 더 짧은 코드
const int MAX = 1000;
int n, i;
int p[MAX];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p, p+n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i]*(n-i);
    }
    cout << sum << '\n';
    return 0;
}
*/