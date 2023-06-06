#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

vector<int> a;

int solution(int num) {
  int right, left, mid;

  right = a.size()-1;
  left = 0;
  mid = (right+left)/2;

  int result = 0;
  while (right-left >= 0) {
    if (a[mid] == num) {
      result = 1;
      break;
    }
    else if (a[mid] > num) right = mid-1;
    else if (a[mid] < num) left = mid+1;
    mid = (right+left)/2;
  }
  return result;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    a.push_back(num);
  }
  sort(a.begin(), a.end());
  
  cin >> M;
  for (int i = 0; i < M; i++) {
    int num;
    scanf("%d", &num);
    printf("%d\n", solution(num));
  }
}
