#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int num) {
    int answer = 0;
    long long tmp = num;
    int cnt = 0;

    while (tmp != 1) {
        if (tmp % 2 == 0) {
            tmp /= 2;
            cnt++;
        }
        else if (tmp % 2 == 1) {
            tmp = tmp * 3 + 1;
            cnt++;
        }
        if (cnt >= 500) {
            return -1;
        }
    }

    answer = cnt;

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