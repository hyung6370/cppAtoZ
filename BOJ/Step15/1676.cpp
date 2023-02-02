#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int count = 0;
    cin >> N;

    for (int i = 5; i <= N; i *= 5) {
        count += (N / i);
    }
    cout << count;
    
    return 0;
}