#include <iostream>
using namespace std;

int factorial(int n) {
    int ans = 1;
    for (int i = 2; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int bino_coef_fac(int n, int k) {
    return factorial(n) / factorial(k) / factorial(n-k);
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    cout << bino_coef_fac(N, K);

    return 0;
}