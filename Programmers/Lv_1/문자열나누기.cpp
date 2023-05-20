#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
    char x;
    vector<string> tmp;

    for (int i = 0; i < s.size(); i++) {
        x = s[i];
        
        int j = i;
        int xCnt = 0, anotherCnt = 0, count = -1;
        while (1) {
            if (x == s[j]) {
                xCnt++;
            }
            else if (x != s[j]) {
                anotherCnt++;
            }
            count++; j++;
            if (xCnt == anotherCnt) break;
        }
        
        tmp.push_back(s.substr(i, count+1));
        i += count;
    }
    answer = tmp.size();
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