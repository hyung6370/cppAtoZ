#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>& vs);

int main() {
  vector<int> v(vector<int> { 1, 6, 5, 2, 3, 8, 4, 9, 7 });

  cout << "before make_heap V : ";
  print(v);

  cout << "after make_heap V : ";
  make_heap(v.begin(), v.end());
  print(v);

  return 0;
}

void print(vector<int>& vs) {
  for (auto v : vs) {
    cout << v << ' ';
  }
  cout << '\n';
}

// OUTPUT
// before make_heap V : 1 6 5 2 3 8 4 9 7 
// after make_heap V : 9 7 8 6 3 5 4 2 1 