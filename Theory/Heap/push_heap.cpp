#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>& vs);

int main() {
  vector<int> v( vector<int> { 1, 6, 5, 2, 3, 8, 4, 9, 7 } );

  make_heap(v.begin(), v.end());
  v.push_back(10);
  push_heap(v.begin(), v.end());
  // push_back을 사용한 다면, 힙을 재구성하기 위해서 push_heap을 사용

  print(v);
}

void print(vector<int>& vs) {
  for (auto v : vs) {
    cout << v << ' ';
  }
  cout << '\n';
}
