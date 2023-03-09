#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int slice, n;
    int result = 0;
    cin >> slice >> n;

    if (n % slice == 0) {
        result = n / slice;
    }
    else {
        result = n / slice + 1;
    }

    cout << result;
}