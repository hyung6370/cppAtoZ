#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int n, value;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }

    return 0;
}