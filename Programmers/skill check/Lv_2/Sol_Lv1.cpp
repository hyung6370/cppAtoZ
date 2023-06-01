#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long factorial[21] = {1, };

vector<int> solution(int n, long long k) {
    vector<int> answer, v;

    for (int i = 1; i <= n; i++) {
        factorial[i] = factorial[i-1] * i;
        v.push_back(i);
    }

    k--;
    while (n > 0) {
        cout << n << " " << k << '\n';
        int firstIndex = k / factorial[n-1];
        answer.push_back(v[firstIndex]);
        v.erase(v.begin() + firstIndex);
        k %= factorial[n-1];
        n--;
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long k;
    vector<int> result;

    cin >> n >> k;
    result = solution(n, k);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }


    return 0;
}