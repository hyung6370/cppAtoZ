#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution (int n) {
    // int answer = 0;

    int count = 1, answer = 1;

    while (1) {
        bool check = false;
        string s = to_string(answer);

        if (answer % 3 == 0) {
            answer += 1;
            continue;
        }
        // else {
        //     if (s.find('3') != string::npos) {
        //         m += 1;
        //         check = true;
        //         break;
        //     }
        // }
        else {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '3') {
                    answer += 1;
                    check = true;
                    break;
                }
            }
        }

        if (check) continue;
        if (count == n) break;

        count++;
        answer++;
    }


    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << solution(n);

    return 0;
}