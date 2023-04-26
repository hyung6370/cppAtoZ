#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    while (n > 0) {
        answer.push_back(n % 10);
        n /= 10;
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    vector<int> result;

    result = solution(n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}