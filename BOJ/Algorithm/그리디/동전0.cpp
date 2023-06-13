#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> Ais, int N, int K) {
    int answer = 0;

    for (int i = N-1; i >= 0; i--) {
        answer += (K / Ais[i]);
        K %= Ais[i];
        cout << "K: " << K << '\n';
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, Ai;
    vector<int> Ais;
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> Ai;
        Ais.push_back(Ai);
    }

    cout << solution(Ais, N, K);

    return 0;
}