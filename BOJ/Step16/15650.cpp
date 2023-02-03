#include <iostream>
#define MAX 9
using namespace std;

int N, M;
int arr[MAX] = { 0 };
bool visited[MAX] = { 0 };

void dfs(int num, int count) {
    if (count == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    else {
        for (int i = num; i <= N; i++) {
            if (!visited[i]) {
                visited[i] = true;
                arr[count] = i;
                dfs(i+1, count+1);
                visited[i] = false;
            }
        }
    }
}
// 재귀 호출에서, 현재 뽑은 원소의 이전 값들은 고려하지 않게 끔,
// for문의 i걊을 함꼐 넘겨준다

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    dfs(1, 0);

    return 0;
}

