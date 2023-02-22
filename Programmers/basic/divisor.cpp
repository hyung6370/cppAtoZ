#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> v;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}