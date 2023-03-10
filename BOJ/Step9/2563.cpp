#include <iostream>
using namespace std;

int paper[100][100];

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    int x, y;
    int count = 0;

    cin >> num;
    while(num--) {
        cin >> x >> y;
        for (int i = y; i < y+10; i++) {
            for (int j = x; j < x+10; j++) {
                if (!paper[i][j]) {
                    count++;
                    paper[i][j] = 1;
                }
            }
        }
    }
    cout << count;

    return 0;
}