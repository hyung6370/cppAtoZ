#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (1) {
        if (n < a) break;
        answer += ((n / a) * b);
        n = (n / a) * b + (n % a);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, n;
    cin >> a >> b >> n;

    cout << solution(a, b, n);

    return 0;
}