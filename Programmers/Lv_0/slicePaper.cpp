#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int M, int N) {
    int answer = 0;

    answer = M * N - 1;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    cin >> M >> N;

    cout << solution(M, N);

    return 0;
}