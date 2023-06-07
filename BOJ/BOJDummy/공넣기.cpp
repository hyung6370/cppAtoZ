#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M, a, b, c;
  cin >> N >> M;
  int* arr = new int[N+1]{0};
  
  for (int i = 0; i < M; i++) {
    cin >> a >> b >> c;
    for (int j = a; j <= b; j++) {
      arr[j] = c;
    }
  }
  
  for (int i = 1; i <= N; i++) {
    cout << arr[i] << " ";
  }
  
  delete[] arr;
  return 0;
}