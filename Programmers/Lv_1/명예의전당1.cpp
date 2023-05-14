#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;

    for (int i = 0; i < score.size(); i++) {
        honor.push_back(score[i]);
        
        sort(honor.begin(), honor.end(), greater<int>());
        if (honor.size() > k) honor.pop_back();
        answer.push_back(honor[honor.size()-1]);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, n, data;
    vector<int> score, result;

    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        score.push_back(data);
    }

    result = solution(k, score);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}