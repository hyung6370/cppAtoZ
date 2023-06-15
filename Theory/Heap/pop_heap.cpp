#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>& vs);

int main() {
  vector<int> v( vector<int> { 1, 6, 5, 2, 3, 8, 4, 9, 7 } );

  make_heap(v.begin(), v.end());
  cout << "before pop : ";
  print(v);

  pop_heap(v.begin(), v.end());

  cout << "after pop : ";
  print(v);

  v.pop_back();
  return 0;
}

void print(vector<int>& vs) {
  for (auto v : vs) {
    cout << v << ' ';
  }
  cout << '\n';
}
