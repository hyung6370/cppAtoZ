#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[9][9] = {};
    int max = 0;
    int positionR = 0, positionC = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (max < arr[i][j]) {
                max = arr[i][j];
                positionR = i;
                positionC = j;
            }
        }
    }
    cout << max << endl;
    cout << positionR+1 << " " << positionC+1;

    return 0;
}