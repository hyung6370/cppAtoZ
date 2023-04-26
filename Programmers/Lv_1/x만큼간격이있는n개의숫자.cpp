#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int xData = 0;
    for (int i = 0; i < n; i++) {
        xData += x;
        answer.push_back(xData);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, n;
    vector<long long> result;
    cin >> x >> n;
    result = solution(x, n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }


    return 0;
}