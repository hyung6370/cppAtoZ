#include <iostream>
using namespace std;

long long func5(long long n) {
    long long count = 0;
    for (long long i = 5; i <= n; i *= 5) {
        count += (n / i);
    }
    return count;
}

long long func2(long long n) {
    long long count = 0;
    for (long long i = 2; i <= n; i *= 2) {
        count += (n / i);
    }
    return count;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, m;
    cin >> n >> m;
    
    cout << min(func2(n)-func2(m)-func2(n-m), func5(n)-func5(m)-func5(n-m));

    return 0;
}