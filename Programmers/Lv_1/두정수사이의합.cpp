#include <iostream>
#include <vector>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if (a > b) {
        for (int i = b; i <= a; i++) {
            answer += i;
        }
    }
    if (a < b) {
        for (int i = a; i <= b; i++) {
            answer += i;
        }
    }
    if (a == b) answer = a;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    cout << solution(a, b);

    return 0;
}