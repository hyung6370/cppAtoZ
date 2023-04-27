#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for (int i = 0; i < signs.size(); i++) {
        if (signs[i] == false) absolutes[i] = -absolutes[i];
    }
    for (int i = 0; i < absolutes.size(); i++) {
        answer += absolutes[i];
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> absolutes;
    vector<bool> signs;

    int data;
    bool bools;

    for (int i = 0; i < 3; i++) {
        cin >> data >> bools;
        absolutes.push_back(data);
        signs.push_back(bools);
    }

    cout << solution(absolutes, signs);

    return 0;
}