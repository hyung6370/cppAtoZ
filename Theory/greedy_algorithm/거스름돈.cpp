#include <iostream>
using namespace std;

int n; // 손님에게 받은 돈
int coin[4] = { 500, 100, 50, 10};
int answer; // 거스름돈

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < 4; i++) {
        answer += (n / coin[i]);
        n %= coin[i];
    }

    cout << answer;
}