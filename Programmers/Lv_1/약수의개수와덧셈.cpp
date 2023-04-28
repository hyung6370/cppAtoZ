#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int divisor = 0;
    for (int i = left; i <= right; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) divisor++;
        }

        if (divisor % 2 == 0) answer += i;
        else answer -= i;

        divisor = 0;
    }
    
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int left, right;
    cin >> left >> right;

    cout << solution(left, right);

    return 0;
}