#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int balls, int share) {
    unsigned long long answer = 1;

    int j = 1;
    for (int i = min(balls, share)+1; i <= max(balls, share); i++) {
        if (j > balls-share) answer *= i;
        else {
            answer = answer * i/j;
            j++;
        }
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int balls, share;
    cin >> balls >> share;
    cout << solution(balls, share);

    return 0;
}