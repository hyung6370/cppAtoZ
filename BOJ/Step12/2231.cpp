#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;
    
    int sol = 0;
    int total = 0;
    for (int i = 0; i < num; i++) {
        sol = i;
        total = i;
        while (sol != 0) {
            total += (sol%10);
            sol /= 10;
        }
        if (num == total) {
            cout << i;
            return 0;
        }
    }

    cout << "0";

    return 0;
}