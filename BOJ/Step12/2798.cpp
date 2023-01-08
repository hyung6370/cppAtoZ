#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    vector<int> v;
    int result = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int cardNum;
        cin >> cardNum;
        v.push_back(cardNum);
    }

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                int s = v[i] + v[j] + v[k];
                if (s <= M && result < s) {
                    result = s;
                }
            }
        }
    }
    cout << result;

    return 0;
}