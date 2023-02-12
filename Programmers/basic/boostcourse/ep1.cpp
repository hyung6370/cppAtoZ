#include <iostream>
#include <algorithm>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long sum = 0;
    for (int i = 1; i <= count; i++) {
        sum += i * price;
    }

    if (sum <= money) answer = 0;
    else answer = abs(money - sum);
     
    return answer;
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int price, money, count;
    int result = 0;
    cin >> price >> money >> count;

    result = solution(price, money, count);
    cout << result;
    return 0;
}