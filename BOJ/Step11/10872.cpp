#include <iostream>
using namespace std;

int fac(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result = result * i;
    }
    return result;
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;

    cout << fac(num);

    return 0;
}