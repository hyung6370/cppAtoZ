#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    int card;
    unordered_map<int, int> m;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> card;
        m[card]++;
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> card;
        cout << m[card] << " ";
    }

    return 0;
}