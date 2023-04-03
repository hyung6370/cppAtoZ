#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int chicken) {
    int answer = -1;
    
    int coupon = chicken;
    int service = 0;
    
    while (coupon >= 10) {
        service += coupon / 10;
        coupon = coupon / 10 + coupon % 10;
    }
    answer = service;
    
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