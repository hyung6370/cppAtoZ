#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string polynomial) {
    string answer = "";
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
        if (x[i] == "x") xValue += 1;
        if (x[i].find('x') == true) {
            cout << x[i].find('x') << '\n';
            xValue += (x[i][0] - '0');
        }
        if (x[i].size() == 1 && x[i] >= "0" && x[i] <= "9") {
            value += stoi(x[i]);
        }
    }
    if (value == 0) {
        answer = to_string(xValue) + "x";
    }
    else {
        answer = to_string(xValue) + "x + " + to_string(value);
    }
    // cout << xValue << "x + " << value;

    // for (int i = 0; i < x.size(); i++) {
    //     cout << x[i] << '\n';
    // }
    // cout << '\n';
    // cout << x[0][0];

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