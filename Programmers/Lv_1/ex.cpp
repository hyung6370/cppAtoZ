#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n = 20;
    
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) cout << n / i << " " << i << '\n';
    }
}