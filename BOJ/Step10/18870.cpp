#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;
    vector<int> v(num);

    for (int i = 0; i < num; i++) {
        cin >> v[i];
    }

    vector<int> copyV(v);
    sort(copyV.begin(), copyV.end());

    copyV.erase(unique(copyV.begin(), copyV.end()), copyV.end());

    for (int i = 0; i < num; i++) {
        auto it = lower_bound(copyV.begin(), copyV.end(), v[i]);
        cout << it-copyV.begin() << " ";
    }

    return 0;
}