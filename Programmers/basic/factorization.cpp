#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i = 2; i*i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            answer.push_back(i);
        }
    }
    if (n != 1) answer.push_back(n);

    answer.erase(unique(answer.begin(), answer.end()), .end());

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> result;
    cin >> n;

    result = solution(n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

