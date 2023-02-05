#include <iostream>
#define MAX 15
using namespace std;

int N, total = 0;
int col[MAX] = { 0 };

bool check(int level) {
    for (int i = 0; i < level; i++) {
        if (col[i] == col[level] || abs(col[level] - col[i]) == level - i) {
            return false;
        }
    }
    return true;
}

void nqueen(int x) {
    if (x == N) total++;
    else {
        for (int i = 0; i < N; i++) {
            col[x] = i;
            if (check(x)) nqueen(x+1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    nqueen(0);
    cout << total;

    return 0;
}