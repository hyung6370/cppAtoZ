#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    int count = 0;
    cin >> n;

    for (i = 2; i <= n; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) break;
        }
        if (i == j) count++;
    }
    cout << count;
}