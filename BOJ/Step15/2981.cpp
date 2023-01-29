#include <iostream>
#include <algorithm>
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

    int N;
    cin >> N;
    int* M = new int[102];

    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }
    sort(M, M + N);

    for (int i = 0; i < N; i++) {
        cout << f_gcd(M[i+1], M[i]) << " ";
    }

    return 0;
}