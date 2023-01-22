#include <iostream>
#include <map>
using namespace std;

map<string, int> m;

int main() {
    m.insert({"Alice", 100});
    m.insert({"Bob", 200});

    if (m.find("Alice") != m.end()) {
        cout << "found" << "\n";
    }
    else {
        cout << "Not found" << "\n";
    }

    // 인덱스 기반
    for (auto iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << " " << iter->second << '\n';
    }
    cout << '\n';

    // 범위 기반
    for (auto iter : m) {
        cout << iter.first << " " << iter.second << '\n';
    }

    return 0;
}