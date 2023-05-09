#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    for (int i = 0; i < numbers.size()-1; i++) {
        for (int j = i+1; j < numbers.size(); j++) {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }

    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> numbers, result;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        numbers.push_back(data);
    }

    result = solution(numbers);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}