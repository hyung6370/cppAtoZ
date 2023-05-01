#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int confirm = 0;
    sort(d.begin(), d.end());

    for (int i = 0; i < d.size(); i++) {
        if (budget - d[i] < 0) break;
        else {
            confirm++;
            budget -= d[i];
        }
    }
    answer = confirm;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data, budget;
    vector<int> d;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        d.push_back(data);
    }

    cin >> budget;

    cout << solution(d, budget);

    return 0;
}