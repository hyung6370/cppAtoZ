#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(int a, int b) {
    string answer = "";

    int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };
    string day[] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };

    int sum = b;

    for (int i = 0; i < a-1; i++) {
        sum += month[i];
    }

    answer = day[sum % 7];

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    cout << solution(a, b);

    return 0;
}