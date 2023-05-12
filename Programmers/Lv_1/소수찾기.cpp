#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> check(n+1, 0);

    for (int i = 2; i <= n; i++) {
        if (check[i]) continue;

        for (int j = i+i; j <= n; j+=i) {
            check[j] = 1;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (!check[i]) answer++;
    }
    
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    cout << solution(n);

    return 0;
}