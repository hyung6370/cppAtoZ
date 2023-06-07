#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long long N, M;
  long long left, right, mid;
  long long sum, max = -1;

  cin >> N >> M;
  int length[N];

  for (int i = 0; i < N; i++) cin >> length[i];
  sort(length, length+N);

  left = 0;
  right = length[N-1];

  while (left <= right) {
    sum = 0;
    mid = (left+right)/2;

    for (int i = 0; i < N; i++) {
      if (length[i]-mid > 0) sum += length[i]-mid;
    }

    if (sum >= M) {
      left = mid+1;
      if (mid > max) max = mid;
    }
    else right = mid-1;
  }
  cout << max;

  return 0;
}