#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, n;
    string clothes, categori;
    vector<int> v;

    cin >> T;
    while (T--) {
        unordered_map<string, int> m;
        int result = 1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> clothes >> categori;
            
            if (m.find(categori) == m.end()) {
                m.insert({categori, 1});
            }
            else {
                m[categori]++;
            }
        }

        for (auto x : m) {
            v.push_back(x.second+1);
	    }
        for (int i = 0; i < v.size(); i++) {
            result *= v[i];
        }
        cout << result-1 << '\n';
        v.clear();
        m.clear();
    }
    return 0;
}