#include <iostream>
#include <map>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    map<int, bool> m;
    cin >> N >> M;
    int num;

    for (int i = 0; i < N+M; i++) {
        cin >> num;
        if (m[num] == true) m.erase(num);
        else m[num] = true;
    }

    cout << m.size();

    return 0;
}