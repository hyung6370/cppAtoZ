#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

queue<string> vecToq(vector<string> v) {
    queue<string> result;

    for (int i = 0; i < v.size(); i++) {
        result.push(v[i]);
    }

    return result;
}

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    queue<string> cards1q, cards2q, goalq;

    cards1q = vecToq(cards1);
    cards2q = vecToq(cards2);
    goalq = vecToq(goal);

    bool isSuccess = true;

    while (!goalq.empty()) {
        if (goalq.front().compare(cards1q.front()) == 0) {
            goalq.pop(); cards1q.pop();
        }
        else if (goalq.front().compare(cards2q.front()) == 0) {
            goalq.pop(); cards2q.pop();
        }
        else {
            isSuccess = false;
            break;
        }
    }

    if (isSuccess) answer += "Yes";
    else answer += "No";

    return answer;
}

// 모범 답안
string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int l = 0; r = 0;

    for (string& g: goal) {
        if (g == cards1[l]) l++;
        else if (g == cards2[r]) r++;
        else return "No";
    }
    return "Yes";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n1, n2, n3;
    vector<string> cards1, cards2, goal;
    string data;

    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> data;
        cards1.push_back(data);
    }
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> data;
        cards2.push_back(data);
    }
    cin >> n3;
    for (int i = 0; i < n3; i++) {
        cin >> data;
        goal.push_back(data);
    }

    cout << solution(cards1, cards2, goal);

    return 0;
}