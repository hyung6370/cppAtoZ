#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    answer += "김서방은 ";
    for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            answer += to_string(i);
        }
    }
    answer += "에 있다";

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string name;
    vector<string> seoul;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        seoul.push_back(name);
    }

    cout << solution(seoul);

    return 0;
}