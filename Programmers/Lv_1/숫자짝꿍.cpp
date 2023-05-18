#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<char, int> mpX;
    map<char, int> mpY;

    for (int i = 0; i < X.size(); i++) mpX[X[i]]++;
    for (int i = 0; i < Y.size(); i++) mpY[Y[i]]++;

    for (int i = 9; i >= 0; i--) {
        int num = min(mpX[i+'0'], mpY[i+'0']);

        for (int j = 0; j < num; j++) answer += (i+'0');
    }

    if (answer.size() == 0) return "-1";
    else if (answer[0] == '0') return "0";
    else return answer;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string X, Y;
    cin >> X >> Y;

    cout << solution(X, Y);

    return 0;
}