#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    int n, rt;
    int count = 0;

    while(1) {
        cin >> n;
        if (n == 0) break;

        for (int i = n+1; i <= 2*n; i++) {
            rt = sqrt(i);
            if (rt == 1 && i != 1) {
                count++;
                continue;
            }

            if (i % 2) {
                for (int j = 2; j <= rt; j++) {
                    if (i % j == 0) break;
                    if (j == rt) count++;
                }
            }
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}