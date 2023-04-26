#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long tmp = sqrt(n);
    
    if (tmp * tmp == n) answer = pow(tmp+1, 2);
    else answer = -1;

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