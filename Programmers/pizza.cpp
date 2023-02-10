#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int result = 0;
    cin >> n;

    if (n % 7 == 0) {
        result = n / 7;
    }
    else{
        result = n / 7;
    }

    cout << result;
}