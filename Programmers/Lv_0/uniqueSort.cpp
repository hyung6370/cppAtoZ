#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

map<int, int> m;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second < b.second;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    for (int i = 0; i < numlist.size(); i++) {
        m.insert({numlist[i], abs(n - numlist[i])});
    }
    vector<pair<int, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), compare);

    // for (auto n : v) {
    //     cout << "key: " << n.first << " | value: " << n.second << '\n';
    // }
    for (auto n : v) {
        answer.push_back(n.first);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, data, n;
    vector<int> numlist, result;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> data;
        numlist.push_back(data);
    }

    cin >> n;

    result = solution(numlist, n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}