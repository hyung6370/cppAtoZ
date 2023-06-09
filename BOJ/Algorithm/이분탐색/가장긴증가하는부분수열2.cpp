#include <iostream>
#include <algorithm>
using namespace std;

int A[1000000], LIS[1000000];
int N;
int LISsize = 1;

int lower_bound(int N, int LISsize) {
  int left = 0, right = LISsize-1, mid;

  while (left <= right) {
    mid = (left+right)/2;

    if (LIS[mid] >= N) right = mid-1;
    else left = mid+1;
  }
  return left;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;

  for (int i = 0; i < N; i++) cin >> A[i];
  LIS[0] = A[0];

  for (int i = 1; i < N; i++) {
    if (LIS[LISsize-1] < A[i]) {
      LIS[LISsize] = A[i];
      LISsize++;
    }
    else {
      int index = lower_bound(A[i], LISsize);
      LIS[index] = A[i];
    }

    for (int i = 0; i < LISsize; i++) {
      cout << LIS[i] << " ";
    }
    cout << '\n';
  }
  // cout << LISsize << '\n';
}