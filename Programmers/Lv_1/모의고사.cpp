#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    int one[5] = {1, 2, 3, 4, 5};
    int two[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int three[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    int one_case = 0, two_case = 0, thr_case = 0;

    for (int i = 0; i < answers.size(); i++) {
        if (one[i%5] == answers[i]) one_case++;
        if (two[i%8] == answers[i]) two_case++;
        if (three[i%10] == answers[i]) thr_case++;
    }
    int max_case = max(one_case, two_case);
    max_case = max(max_case, thr_case);

    if (max_case == one_case) answer.push_back(1);
    if (max_case == two_case) answer.push_back(2);
    if (max_case == thr_case) answer.push_back(3);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> answers, result;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        answers.push_back(data);
    }

    result = solution(answers);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}