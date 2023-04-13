#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    vector<int> v;
    set<int> s;

    for (int i = 1; i < common.size(); i++) {
        s.insert(common[i] - common[i-1]);
    }
    for (auto i : s) {
        v.push_back(i);
    }
    
    if (v.size() == 1) answer = common[common.size()-1] + v[0];
    else answer = common[common.size()-1] * (common[1]/common[0]);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, value;
    vector<int> common;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> value;
        common.push_back(value);
    }

    cout << solution(common);


    return 0;
}