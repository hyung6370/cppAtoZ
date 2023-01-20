#include <iostream>
#include <set>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    set<int> s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num1;
        cin >> num1;
        s.insert(num1);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int num2;
        cin >> num2;
        auto pos = s.find(num2);
        if (pos == s.end()) {
            cout << "0" << " ";
        }
        else {
            cout << "1" << " ";
        }
    }
    return 0;
}