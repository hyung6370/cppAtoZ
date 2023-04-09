#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    string subValue = "";
    int pre = 0, cur = 0, xValue = 0, value = 0;
    vector<string> x;
    x.clear();
    cur = polynomial.find(' ');

    while (cur != string::npos) {
        string sub = polynomial.substr(pre, cur-pre);
        x.push_back(sub);
        pre = cur + 1;
        cur = polynomial.find(' ', pre);
    }
    x.push_back(polynomial.substr(pre, cur-pre));

    for (int i = 0; i < x.size(); i++) {
        if (x[i] == "+") continue;
        if (x[i] == "x") {
            xValue += 1;
            continue;
        }
        if (find(x[i].begin(), x[i].end(), 'x') != x[i].end()) {
            for (int j = 0; j < find(x[i].begin(), x[i].end(), 'x') - x[i].begin(); j++) {
                subValue += x[i][j];
            }
            xValue += stoi(subValue);
            subValue = "";
        }

        if (x[i].size() == 1 && x[i] >= "0" && x[i] <= "9") {
            value += stoi(x[i]);
            // value를 일의 자리 수 밖에 생각을 못했다. 십의자리, 백의자리 수도 구현이 필요하다
        }
    }
    if (value == 0) answer = to_string(xValue) + "x";
    else if (xValue == 0) answer = to_string(value);
    else answer = to_string(xValue) + "x + " + to_string(value);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string polynomial;
    getline(cin, polynomial);

    cout << solution(polynomial);

    return 0;
}