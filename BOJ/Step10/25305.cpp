#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int N, k;
    int score;
    cin >> N >> k;

    for (int i = 0; i < N; i++) {
        cin >> score;
        v.push_back(score);
    }
    sort(v.begin(), v.end());
    cout << v[N-k];
    return 0;
}