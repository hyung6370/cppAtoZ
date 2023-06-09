#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, C;
  int left, right, mid;
  int result;
  int X;
  vector<int> routers;
  cin >> N >> C;
  for (int i = 0; i < N; i++) {
    cin >> X;
    routers.push_back(X);
  }
  sort(routers.begin(), routers.end());

  left = 0;
  right = routers[N-1];

  while (left <= right) {
    int install_router = 1;
    mid = (left+right) / 2;

    int start = routers[0];

    for (int i = 0; i < N; i++) {
      int end = routers[i];
      if (end-start >= mid) {
        install_router += 1;
        start = end;
      }
    }

    if (install_router >= C) {
      result = mid;
      left = mid+1;
    }
    else right = mid-1;
  }

  cout << result;

}