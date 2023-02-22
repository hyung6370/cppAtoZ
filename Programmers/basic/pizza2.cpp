#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 1;
    int n2 = n;

    while (n2 % 6 != 0) {
        n2 += n;
    }
    answer = n2 / 6;
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