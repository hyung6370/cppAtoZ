#include <iostream>
#include <cmath>
using namespace std;

int solution (int n, int t) {
    int answer = 0;
    for (int i = 0; i < t; i++) {
        n *= 2;
    }
    answer = n;
    return answer;

    // return n << t
    // shift 연산 사용!
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long n, t;
    cin >> n >> t;

    cout << solution(n, t);

    return 0;
}