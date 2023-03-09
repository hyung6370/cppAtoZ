#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool divisor(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
    }

    if (cnt >= 3) return true;
    else return false;
}

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++) {
        if (divisor(i)) answer++;
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << solution(n);

    return 0;
}