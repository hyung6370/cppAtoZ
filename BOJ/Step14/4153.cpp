#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int side1, side2, side3;
    vector<int> v;

    while (true) {
        cin >> side1 >> side2 >> side3;
        if (side1 == 0 && side2 == 0 && side3 == 0) break;
        v.push_back(side1);
        v.push_back(side2);
        v.push_back(side3);
        sort(v.begin(), v.end());
        if (pow(v[2], 2) == pow(v[0], 2) + pow(v[1], 2)) {
            cout << "right" << '\n';
        }
        else if (pow(v[2], 2) != pow(v[0], 2) + pow(v[1], 2)) {
            cout << "wrong" << '\n';
        }
        
        v.clear();
    }

    return 0;
}