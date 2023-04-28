#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    for (int i = 0; i < 10; i++) {
        if (find(numbers.begin(), numbers.end(), i) == numbers.end()) {
            answer += i;
        }
        else continue;
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> numbers;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        numbers.push_back(data);
    }

    cout << solution(numbers);

    return 0;
}