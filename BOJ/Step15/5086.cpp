#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num1, num2;

    while (true) {
        cin >> num1 >> num2;
        if (num1 == 0 && num2 == 0) break;

        if (num2 % num1 == 0) {
            cout << "factor" << '\n';
        }
        else if (num1 % num2 == 0) {
            cout << "multiple" << '\n';
        }
        else {
            cout << "neither" << '\n';
        }
    }

    return 0;
}