#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    string name;
    vector<string> v;
    set<string> s;
    map<string, bool> m;
    int count = 0;

    for (int i = 0; i < N; i++) {
        cin >> name;
        m.insert(make_pair(name, true));
    }
    for (int i = 0; i < M; i++) {
        cin >> name;
        if (m[name]) {
            v.push_back(name);
            count++;
        }
    }

    cout << count << '\n';
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }

    return 0;
}