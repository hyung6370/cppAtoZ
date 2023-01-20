#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int num = 665;
    int count = 0;

    while (count != N) {
        num++;

        if (to_string(num).find("666") != string::npos) {
            count++;
        }
    }

    cout << num;

    return 0;
}