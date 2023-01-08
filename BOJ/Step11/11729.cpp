#include <iostream>
using namespace std;

void hanoi(int N, int start, int to, int by) {
    if (N == 1) {
        printf("%d %d\n", start, to);
    }
    else {
        hanoi(N-1, start, by, to);
        printf("%d %d\n", start, to);
        hanoi(N-1, by, to, start);
    }
}

int main() {
    int N;
    cin >> N;

    cout << (1<<N)-1 << endl;
    hanoi(N, 1, 3, 2);
}