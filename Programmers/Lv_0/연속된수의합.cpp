#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int m = (((total * 2) / num) + num - 1) / 2;

    for (int i = 0; i < num; i++) {
        answer.push_back(m-i);
    }
    sort(answer.begin(), answer.end());

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, total;
    cin >> num >> total;

    vector<int> result;
    result = solution(num, total);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}