#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string phone_number) {
    string answer = "";

    for (int i = 0; i < phone_number.size(); i++) {
        if (i < phone_number.size()-4) {
            answer += '*';
        }
        else answer += phone_number[i];
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string phone_number;
    cin >> phone_number;
    cout << solution(phone_number);

    return 0;
}