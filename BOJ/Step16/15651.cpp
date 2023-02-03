#include <iostream>
#define MAX 9
using namespace std;

int N, M;
int arr[MAX] = { 0 };
bool visited[MAX] = { 0 };

void dfs(int count) {
    if (count == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    else {
        for (int i = 1; i <= N; i++) {
            visited[i] = true;
            arr[count] = i;
            dfs(count+1);
            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    dfs(0);

    return 0;
}