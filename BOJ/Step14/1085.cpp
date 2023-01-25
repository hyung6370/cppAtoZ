#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int width = min(abs(x-w), abs(x-0));
    int length = min(abs(y-h), abs(y-0));

    cout << min(width, length);

    return 0;
}