#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string reverse_answer = "";
    for (int i = 1; i < food.size(); i++) {
        if (food[i] % 2 == 1) {
            for (int j = 0; j < (food[i]-1)/2; j++) {
                answer += to_string(i);
            }
        }
        else if (food[i] % 2 == 0) {
            for (int j = 0; j < food[i]/2; j++) {
                answer += to_string(i);
            }
        }
    }
    reverse_answer = answer;
    reverse(reverse_answer.begin(), reverse_answer.end());

    answer += "0";
    answer += reverse_answer;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> food;
    int n, data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        food.push_back(data);
    }

    cout << solution(food);

    return 0;
}