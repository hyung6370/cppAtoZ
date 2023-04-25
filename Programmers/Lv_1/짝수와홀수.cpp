#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(int num) {
    string answer = "";

    if (abs(num % 2) == 1) answer = "Odd";
    else answer = "Even";

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    cout << solution(num);

    return 0;
}