#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

int divisor_cnt(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;
            if (n / i != i) cnt++;
        }
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    map<int, int> m;
    
    for (int i = 1; i <= number; i++) {
        m.insert({i, divisor_cnt(i)});
    }

    for (auto iter: m) {
        if (iter.second > limit) {
            answer += power;
            continue;
        }
        answer += iter.second;
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int number, limit, power;
    cin >> number >> limit >> power;

    cout << solution(number, limit, power);

    return 0;
}