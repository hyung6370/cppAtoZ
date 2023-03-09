#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() {
    int numer, denom;
    int gcd_num;
    cin >> numer >> denom;

    gcd_num = gcd(numer, denom);
    
    cout << numer/gcd_num << " " << denom/gcd_num;
}