#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int num;
    cin >> num;

    while(1) {
        v.push_back(num % 10);
        num = num / 10;
        if (num == 0) break;
    }

    sort(v.begin(), v.end());
    
    for (int i = v.size()-1; i >= 0; i--) {
        cout << v[i];
    }

    return 0;
}