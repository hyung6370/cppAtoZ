#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int chicken) {
    int answer = -1;
    int temp = chicken;
    int coupon = 0;
    while (temp > 0) {
        temp = temp / 10;
        coupon++;
    }
    cout << coupon << '\n';
    answer = chicken / 10;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int chicken;
    cin >> chicken;

    cout << solution(chicken);

    return 0;
}