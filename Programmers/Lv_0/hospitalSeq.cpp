#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, value;
    vector<int> emergency;

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> value;
        emergency.push_back(value);
    }

    vector<int> answer;
    vector<int> v(emergency); // emergency를 v에 복사
    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < emergency.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if (v[j] == emergency[i]) answer.push_back(j+1);
        }
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }

    return 0;
}