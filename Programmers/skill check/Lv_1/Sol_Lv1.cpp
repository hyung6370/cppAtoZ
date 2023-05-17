#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    for (long long i = 1; i < 10000000; i++) {
        if (pow(i, 2) == n) {
            answer = pow(i+1, 2);
            return answer;
        }
    }
    return -1;
    
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    cout << solution(n);

    return 0;
}