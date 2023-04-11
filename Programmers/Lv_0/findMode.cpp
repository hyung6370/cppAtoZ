#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int solution(vector<int> array) {
    int answer = 0;
    int maxValue = 0, cnt = 1;
    map<int, int> m;
    map<int, int> m2;
    vector<int> v;
    map<int, int>::iterator iter;

    for (int i = 0; i < array.size(); i++) {
        m[array[i]]++;
    }
    vector<pair<int, int>> vv(m.begin(), m.end());
    sort(vv.begin(), vv.end(), compare);

    for (auto n : vv) {
        v.push_back(n.second);
        cout << "key: " << n.first << " | value: " << n.second << '\n';
    }

    for (int i = 0; i < v.size(); i++) {
        maxValue = v[0];
        if (maxValue < v[i]) maxValue = v[i];
        m2[v[i]]++;
    }

    int max = vv[0].first;
    cout << '\n';
    cout << "maxValue : " << maxValue << '\n';

    cout << '\n';
    answer = max;
    if (v.size() == 1) return vv[0].first;
    if (m.size() >= 2 && equal(v.begin()+1, v.end(), v.begin())) return -1;
    
    for (auto item: m2) {
		cout << item.first << ": " << item.second << '\n';
        if (item.second >= 2 && maxValue == item.second) return -1;
	}
    // 어렵다.... 다시 풀어보자 나중에
    

    return answer;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, value;
    vector<int> array;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> value;
        array.push_back(value);
    }

    cout << solution(array);

    return 0;
}