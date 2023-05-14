#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<int> v;
    sort(score.begin(), score.end());

    while (score.size() > m-1) {
        for (int i = 0; i < m; i++) {
            v.push_back(score[score.size()-1]);
            score.pop_back();
        }

        answer += (*min_element(v.begin(), v.end()) * m);
        v.clear();
    }

    return answer;
}


priority_queue<int> pq;

int solution2(int k, int m, vector<int> score) {
    int answer = 0;

    for (int i = 0; i < score.size(); i++) pq.push(score[i]);

    // cout << '\n';
    // while (!pq.empty()) {
    //     cout << pq.top() << '\n';
    //     pq.pop();
    // }
    // cout << '\n';

    while (pq.size() >= m) {
        for (int i = 0; i < m-1; i++) pq.pop();
        answer += pq.top() * m;
        pq.pop();
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, m, n, data;
    vector<int> score;
    
    cin >> k >> m >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        score.push_back(data);
    }

    cout << solution(k, m, score);

    return 0;
}