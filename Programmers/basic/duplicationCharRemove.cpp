#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

// string solution(string my_string) {
//     string answer = "";

//     vector<char> v;

//     for (int i = 0; i < my_string.size(); i++) {
//         v.push_back(my_string[i]);
//     }
//     for (const auto& n : v) cout << n << " ";
    
//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     cout << '\n';
//     for (const auto& n : v) cout << n << " ";

//     return answer;
// }



// string solution(string my_string) {
//     string answer = "";

//     set<char> s;

//     for (int i = 0; i < my_string.size(); i++) {
//         s.insert(my_string[i]);
//     }

//     for (auto e = s.begin(); e != s.end(); e++) {
//         cout << *e << " ";
//     }

//     return answer;
// }

bool cmp(const pair<char, int>& a, const pair<char, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

string solution(string my_string) {
    string answer = "";

    map<char, int> m;

    for (int i = 0; i < my_string.size(); i++) {
        m.insert({my_string[i], i});
    }

    vector<pair<char, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    // for (auto iter : m) {
    //     // cout << iter.first << " " << iter.second << '\n';
        
    // }
    for (auto iter : v) {
        cout << "key: " << iter.first << " | value: " << iter.second << '\n';
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string my_string;
    getline(cin, my_string);

    cout << solution(my_string);

    return 0;
}