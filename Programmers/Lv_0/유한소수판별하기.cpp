#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int solution(int a, int b) {
    int answer = 0;
    b /= gcd(a, b);

    while (1) {
        if (b % 2 == 0) b /= 2;
        else if (b % 5 == 0) b /= 5;
        else break;
    }
    // cout << gcd(a, b) << '\n';
    if (b == 1) answer = 1;
    else answer = 2;

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