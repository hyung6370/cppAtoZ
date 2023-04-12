#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (int i = 0; i < quiz.size(); i++) {
        int pre = 0, cur = 0;
        int result = 0;
        vector<string> x;
        x.clear();
        cur = quiz[i].find(' ');

        while (cur != string::npos) {
            string sub =quiz[i].substr(pre, cur-pre);
            x.push_back(sub);
            pre = cur + 1;
            cur = quiz[i].find(' ', pre);
        }
        x.push_back(quiz[i].substr(pre, cur-pre));

        if (x[1] == "+") {
            
        }

    }

    

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string q;
    vector<string> quiz, result;

    cin >> n;
    for (int i = 0; i < n; i++) {
        getline(cin, q, '$');
        quiz.push_back(q);
    }
    // for (int i = 0; i < quiz.size(); i++) {
    //     cout << quiz[i];
    // }

    result = solution(quiz);

    // for (int i = 0; i < result.size(); i++) {
    //     cout << result[i] << " ";
    // }

    return 0;
}