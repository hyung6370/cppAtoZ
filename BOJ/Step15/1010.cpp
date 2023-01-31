#include <iostream>
#define MAX 33
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, N, M;
    int dp[MAX][MAX] = { 0 };
    cin >> T;

    while (T--) {
        cin >> N >> M;
        for (int i = 1; i <= M; i++) {
            dp[1][i] = i;
        }

        for (int i = 2; i <= N; i++) {
            for (int j = 2; j <= M; j++) {
                dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
            }
        }
        cout << dp[N][M] << '\n';
    }

    return 0;
}