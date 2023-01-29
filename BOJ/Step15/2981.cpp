#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, gcd;
int x;
vector<int> v, result;

int f_gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    gcd = v[1] - v[0];
    for (int i = 2; i < N; i++) {
        gcd = f_gcd(gcd, v[i]-v[i-1]);
    }

    for (int i = 2; i*i <= gcd; i++) {
        if (gcd % i == 0) {
            result.push_back(i);
            result.push_back(gcd/i);
        }
    }
    result.push_back(gcd);

    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }


    return 0;
}