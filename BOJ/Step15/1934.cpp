#include <iostream>
using namespace std;

int f_gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int f_lcm(int a, int b) {
    return (a*b) / f_gcd(a, b);
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, A, B;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << f_lcm(A, B) << '\n';
    }

    return 0;
}