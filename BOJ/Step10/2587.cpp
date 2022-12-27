#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int num;
    int average = 0;
    int center;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        v.push_back(num);
        average += num;
    }
    average = average / 5;
    sort(v.begin(), v.end());
    center = v[2];

    cout << average << endl << center;

    return 0;
}