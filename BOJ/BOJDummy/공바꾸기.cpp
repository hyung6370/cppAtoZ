#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M, a, b;
  cin >> N >> M;
  int arr[N+1];
  for (int i = 1; i <= N; i++) arr[i] = i;

  for (int i = 0; i < M; i++) {
    cin >> a >> b;
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
  }

  for (int i = 1; i <= N; i++) {
    cout << arr[i] << " ";
  }
}