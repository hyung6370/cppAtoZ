#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;

    while (n > 0) {
        answer += (n % 10);
        n /= 10;
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    cout << solution(N);

    return 0;
}