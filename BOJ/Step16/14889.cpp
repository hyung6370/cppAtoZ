#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

int N;
int ans = 1000000000;
int s[21][21];
int arr[21];
bool visited[21] = { false, };

int calculation(int m) {
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < m; i++) {
        int x = arr[i];
        for (int j = 0; j < m; j++) {
            if (i == j) {
                continue;
            }
            int y = arr[j];
            sum1 += s[x][y];
        }
    }
    for (int i = m; i < N; i++) {
        int x = arr[i];
        for (int j = m; j < N; j++) {
            if (i == j) {
                continue;
            }
            int y = arr[j];
            sum2 += s[x][y];
        }
    }
    return abs(sum1 - sum2);
}

void dfs(int index, int depth) {
    int m = N/2;

    if (depth == m) {
        for (int i = 0; i < N; i++) {
            if (!visited[i])
                arr[depth++] = i;
        }
        ans = min(ans, calculation(m));
        return;
    }

    for (int i = index; i < N; i++) {
        if (!visited[i] && (N - 1 - i) >= (m - i - depth)) {
            visited[i] = true;
            arr[depth] = i;
            dfs(i, depth+1);
            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> s[i][j];
        }
    }

    arr[0] = 0;
    visited[0] = true;
    dfs(0, 1);

    cout << ans;

    return 0;
}