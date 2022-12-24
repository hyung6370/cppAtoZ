#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNum(int i) {
    int rt;
    rt = sqrt(i);

    if (rt == 1 && i != 1) return true;
    if (i % 2 == 1) {
        for (int j = 2; j <= rt; j++) {
            if (i % j == 0) return false;
            if (j == rt) return true;
        }
    }
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = n/2; j >= 2; j--) {
            if (isPrimeNum(j) && isPrimeNum(n - j)) {
                cout << j << " " << n - j << endl;
                break;
            }
        }
    }
}