#include <iostream>
#define MAX 1001
#define REMAINDER 10007
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    long long dp[MAX][MAX];

    cin >> N >> K;
    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) dp[i][0] = 1;
            else if (j == i) dp[i][j] = 1;
            else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % REMAINDER;
        }
    }

    cout << dp[N][K];
} 