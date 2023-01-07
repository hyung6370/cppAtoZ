#include <iostream>
using namespace std;

void rec(int i, int j, int num) {
    if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
        cout << " ";
    }
    else {
        if (num / 3 == 0) {
            cout << "*";
        }
        else rec(i, j, num / 3);
    }
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            rec(i, j, num);
        }
        cout << endl;
    }

    return 0;
}