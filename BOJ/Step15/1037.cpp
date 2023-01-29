#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, n;
    cin >> num;
    int* divisor = new int[num];

    for (int i = 0; i < num; i++) {
        cin >> divisor[i];
    }

    sort(divisor, divisor+num);
    n = divisor[0] * divisor[num-1];
    cout << n;
}