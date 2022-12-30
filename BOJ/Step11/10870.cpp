#include <iostream>
using namespace std;

int fi(int num) {
    if (num == 0) return 0;
    else if (num == 1) return 1;
    else return fi(num-2) + fi(num-1);
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;

    cout << fi(num);

    return 0;
}