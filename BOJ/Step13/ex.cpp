#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(4);
    
    // 1이 있으면, 그 위치에 대한 iterator
    // 1이 없으면, s.end()를 넘겨준다
    auto pos = s.find(1);
    if (pos == s.end()) {
        cout << "Not found" << '\n';
    }
    else {
        cout << "Found" << '\n';
    }

    // 첫번째 값은 res.first, 두번째 값은 res.second로 볼 수 있다.
    pair<set<int>::iterator, bool> res = s.insert(30);
    if (res.second == false) {
        cout << "Already exist" << '\n';
    }
    else {
        cout << "Insertion success" << '\n';
    }

    s.erase(30);

    // 출력, iterator
    for (auto e = s.begin(); e != s.end(); e++) {
        cout << *e << " ";
    }

    cout << "\n";

    // reference
    for (auto& e : s) {
        cout << e << " ";
    } 

    return 0;

}