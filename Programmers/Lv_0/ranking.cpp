#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<int, int> m;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> v, v_cpy;
    int avg = 0;
    int ranking = 1;

    for (int i = 0; i < score.size(); i++) {
        // avg = (score[i][0] + score[i][1]) / 2;
        v.push_back(score[i][0] + score[i][1]);
        v_cpy.push_back(score[i][0] + score[i][1]);
    }

    sort(v_cpy.begin(), v_cpy.end(), greater<>());

    for (int i = 0; i < v_cpy.size(); i++) {
        if (m.find(v_cpy[i]) == m.end()) {
            m[v_cpy[i]] = ranking;
        }
        ranking++;
    }

    for (int i = 0; i < v.size(); i++) {
        answer.push_back(m[v[i]]);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> score;
    int engScore, mathScore;
    vector<int> grade, result;

    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> engScore >> mathScore;
        grade.push_back(engScore);
        grade.push_back(mathScore);
        score.push_back(grade);
        grade.clear();
    }


    // for (int i = 0; i < score.size(); i++) {
    //     for (int j = 0; j < score[0].size(); j++) {
    //         cout << (*(score.begin() + i))[j] << " ";
    //     }
    // }

    result = solution(score);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}