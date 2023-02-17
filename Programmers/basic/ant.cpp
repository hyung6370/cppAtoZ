#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int hp) {
    int answer = 0;
    
    answer += (hp / 5);
    hp %= 5;

    answer += (hp / 3);
    hp %= 3;
    
    answer += hp;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int hp;
    cin >> hp;

    cout << solution(hp);

    return 0;
}