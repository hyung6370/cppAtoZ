#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    for (string s : babbling) {
        int flag = 0;
        bool j = true;

        for (int i = 0; i < s.size(); i++) {
            if (s.substr(i, 3) == "aya" && flag != 1) {
                flag = 1;
                i += 2;
            }
            else if (s.substr(i, 2) == "ma" && flag != 2) {
                flag = 2;
                i += 1;
            }
            else if (s.substr(i, 3) == "woo" && flag != 3) {
                flag = 3;
                i += 2;
            }
            else if (s.substr(i, 2) == "ye" && flag != 4) {
                flag = 4;
                i += 1;
            }
            else {
                j = false;
                break;
            }
        }
        if (j == true) answer++;
    }

    return answer;
}

int solution2(vector<string> babbling) {
    int answer = 0;

    for (int i = 0; i < babbling.size(); i++) {
        string tmp1 = "";
        string tmp2 = "";
        for (char c: babbling[i]) {
            tmp1 += c;

            if (tmp1 == "aya" || tmp1 == "ye" || tmp1 == "woo" || tmp1 == "ma") {
                if (tmp2 == tmp1) break;
                tmp2 = tmp1;
                tmp1 = "";
            }
        }
        if (tmp1.size() == 0) answer++;
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string data;
    vector<string> babbling;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        babbling.push_back(data);
    }

    cout << solution(babbling);

    return 0;
}