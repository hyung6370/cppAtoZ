#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string s, int n) {

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] + n > 'Z' ? s[i] += (n-'Z'+'A'-1) : s[i] += n;
        }
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] + n > 'z' ? s[i] += (n-'z'+'a'-1) : s[i] += n;
        }
    }

    return s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int n;
    
    getline(cin, s);
    cin >> n;

    cout << solution(s, n);

    return 0;
}