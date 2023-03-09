#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int money;
    cin >> money;
    
    int cnt = money / 5500;
    int reminder = money - 5500 * cnt;
    cout << cnt << " " << reminder;
    return 0;
}