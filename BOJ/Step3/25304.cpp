#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int total;
    int item_cnt;
    int a, b;
    int sum = 0;

    cin >> total >> item_cnt;
    for (int i = 0; i < item_cnt; i++) {
        cin >> a >> b;
        sum += (a * b);
    }

    if (total == sum) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}