#include <iostream>
#include <set>
using namespace std;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    int count = 0;
    cin >> N >> M;
    set<string> s;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        s.insert(word);
    }

    for (int i = 0; i < M; i++) {
        string word2;
        cin >> word2;
        auto pos = s.find(word2);
        if (pos == s.end()) {
            continue;
        }
        else {
            count++;
        }
    }

    cout << count;

    return 0;
}