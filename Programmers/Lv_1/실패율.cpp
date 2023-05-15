#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

// 내 풀이
bool cmp(const pair<int, double>& a, const pair<int, double>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int totalStage = stages.size();
    int count = 0;
    vector<double> failRates;
    map<int, double> m;

    for (int i = 1; i <= N; i++) {
        int fail = 0;
        sort(stages.begin(), stages.end(), greater<int>());
        for (int j = 0; j < stages.size(); j++) {   
            if (i >= stages[j]) fail++;
        }
        if (totalStage > 0) {
            failRates.push_back((double)(fail)/(double)totalStage);
        }
        else failRates.push_back(0); // 이 부분을 간과했었다..
        for (int j = 0; j < fail; j++) stages.pop_back();
        totalStage -= fail;
    }

    for (int i = 0; i < failRates.size(); i++) {
        m.insert({i+1, failRates[i]});
    }
    vector<pair<int, double>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    for (auto n : v) {
        answer.push_back(n.first);
    }

    return answer;
}

// 모범 답안에는 map 대신 pair를 썼다


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, n, data;
    vector<int> stages, result;

    cin >> N >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        stages.push_back(data);
    }

    result = solution(N, stages);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}