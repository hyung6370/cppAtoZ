#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string s) {
    string answer = "";
    
    map<char, int> m;
    for (const auto v : s) {
        m[v]++;
    }

    for (const auto& v : m) {
        if (v.second == 1) {
            answer.push_back(v.first);
        }
    }
    
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    cout << solution(s);

    return 0;
}

