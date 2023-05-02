#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;

    for (int i = 0; i < number.size(); i++) {
        for (int j = i+1; j < number.size(); j++) {
            for (int k = j+1; k < number.size(); k++) {
                if (number[i] + number[j] + number[k] == 0) answer++;
            }
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> number;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        number.push_back(data);
    }

    cout << solution(number);

    return 0;
}