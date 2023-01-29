#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    int x1, y1, x2, y2, cx, cy, r, n;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> n;
        int in = 0, out = 0;
        for (int j = 0; j < n; j++) {
            cin >> cx >> cy >> r;

            if (pow((cx-x1), 2) + pow((cy-y1), 2) < pow(r, 2)) {
                if (pow((cx-x2), 2) + pow((cy-y2), 2) > pow(r, 2)) {
                    out++;
                }
            }

            if (pow((cx-x1), 2) + pow((cy-y1), 2) > pow(r, 2)) {
                if (pow((cx-x2), 2) + pow((cy-y2), 2) < pow(r, 2)) {
                    in++;
                }
            }
        }
        cout << in + out << '\n';
    }

    return 0;
}