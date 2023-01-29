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

    int num1, num2;
    int gcd, lcm;
    cin >> num1 >> num2;

    gcd = f_gcd(num1, num2);
    lcm = f_lcm(num1, num2);

    cout << gcd << '\n' << lcm;

    return 0;
}