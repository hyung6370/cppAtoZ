#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (int i = 0; i < babbling.size(); i++) {
        bool check = false;

        for (int j = 0; j < babbling[i].size(); i++) {
            if (babbling[i].substr(j, 3) == "aya") j += 2;
            else if (babbling[i].substr(j, 2) == "ye") j += 1;
            else if (babbling[i].substr(j, 3) == "woo") j += 2;
            else if (babbling[i].substr(j, 2) == "ma") j += 1;
            else {
                check = true;
                break;
            }
        }

        if (!check) answer++;
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