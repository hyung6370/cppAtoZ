#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for (auto iter = completion.rbegin(); iter != completion.rend(); ++iter) {
        if (participant.back() != *iter) {
            answer = participant.back();
            break;
        }
        participant.pop_back();
    }
    if (answer.empty()) answer = participant[0];

    return answer;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int pN, cN;
    string data;
    vector<string> participant, completion;

    cin >> pN;
    for (int i = 0; i < pN; i++) {
        cin >> data;
        participant.push_back(data);
    }
    cin >> cN;
    for (int i = 0; i < cN; i++) {
        cin >> data;
        completion.push_back(data);
    }

    cout << solution(participant, completion);

    return 0;
}