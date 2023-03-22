#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fac(int n) {
    unsigned long long answer = 1;
    for (int i = 2; i <= n; i++) {
        answer *= i;
    }
    return answer;
}

int solution(int balls, int share) {
    unsigned long long answer = 0;

    answer = fac(balls) / (fac(balls-share) * fac(share));

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int balls, share;
    cin >> balls >> share;
    cout << solution(balls, share);

    return 0;
}