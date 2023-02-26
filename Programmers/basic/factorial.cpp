#include <iostream>
#include <string>
#include <vector>
using namespace std;

int factorial(int n) {
    int answer = 1;
    for (int i = 2; i <= n; i++) {
        answer *= i;
    }
    return answer;
}

int solution(int n) {
    int answer = 0;

    for (int i = 1; factorial(i) <= n; i++) {
        answer = i;
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