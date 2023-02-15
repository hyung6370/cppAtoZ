#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n > 0) {
        cout << n % 10 << '\n';
        n /= 10;
    }
    
    return 0;
}