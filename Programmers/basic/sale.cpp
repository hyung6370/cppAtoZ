#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int price) {
    int answer = 0;
    if (price >= 100000 && price < 300000) answer = price - price * 0.05;
    else if (price >= 300000 && price < 500000) answer = price - price * 0.1;
    else if (price >= 500000) answer = price - price * 0.2;
    else answer = price;
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int price;
    cin >> price;

    cout << solution(price);

    return 0;
}