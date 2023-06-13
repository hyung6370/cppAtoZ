#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int N, vector<pair<int, int>> info) {
    sort(info.begin(), info.end());

    int cur = info[0].first;
    int answer = 1;

    for (int i = 1; i <= N; i++) {
        if (info[i].second >= cur) {
            answer++;
            cur = info[i].first;
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;
    vector<pair<int, int>> info;
    
    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> end >> start;
        info.push_back(make_pair(start, end));
    }

    cout << solution(N, info);

    return 0;
}