#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution2(string t, string p) {
    int answer = 0;
    int pSize = p.size();
    vector<string> v;
    for (int i = 0; i < t.size()-pSize+1; i++) {
        string nums = "";
        for (int j = i; j < i+pSize; j++) {
            nums += t[j];
        }
        v.push_back(nums);
        nums = "";
    }

    for (int i = 0; i < v.size(); i++) {
        if (stoi(v[i]) <= stoi(p)) answer++;
    }

    return answer;
}

int solution(string t, string p) {
    int answer = 0;
    int pSize = p.size();
    
    for (int i = 0; i < t.size()-pSize+1; i++) {
        string num = t.substr(i, pSize);
        bool same = true;

        for (int j = 0; j < pSize; j++) {
            if (num[j] < p[j]) {
                answer++;
                same = false;
                break;
            }
            else if (num[j] > p[j]) {
                same = false;
                break;
            }
        }
        if (same) answer++;
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string t, p;
    cin >> t >> p;

    cout << solution(t, p);

    return 0;
}