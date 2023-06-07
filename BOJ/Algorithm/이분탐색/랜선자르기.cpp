#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int K, N;
  long long left = 1;
  long long right, mid, total;
  long long sum = 0, max = -1;

  cin >> K >> N;

  int length[K];

  for (int i = 0; i < K; i++) {
    cin >> length[i];
    sum += length[i];
  }

  right = sum / N;

  while (left <= right) {
    total = 0;
    mid = (left+right)/2;

    for (int i = 0; i < K; i++) {
      total += length[i]/mid;
    }

    if (total >= N) {
      left = mid+1;
      if (mid > max) max = mid;
    }
    else right = mid-1;
  }
  cout << max;
  return 0;
}