#include <iostream>
using namespace std;

int main() {
    int n, k, answer;
    cin >> n >> k;

    int num = 1;
    while (1) {
        if (num == n) break;
        if (num * k <= n) {
            num *= k;
            answer++;
        }
        else {
            num++;
            answer++;
        }
    }
    cout << answer;
}