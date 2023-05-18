#include <iostream>
#include <algorithm>
using namespace std;

int n, m, k, answer;
int arr[1001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());

    int big1 = arr[0];
    int big2 = arr[1];

    while (1) {
        if (m == 0) break;
        for (int i = 0; i < k; i++) {
            answer += big1;
            m--;
            if (m == 0) break;
        }
        answer += big2;
        m--;
    }
    cout << answer;
}