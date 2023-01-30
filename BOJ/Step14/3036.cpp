#include <iostream>
#include <vector>
using namespace std;

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

    int N, ringR, deno;
    vector<int> v, gcd;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> ringR;
        v.push_back(ringR);
    }
    deno = v[0];
    v.erase(v.begin());

    for (int i = 0; i < v.size(); i++) {
        gcd.push_back(f_gcd(deno, v[i]));
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << deno/gcd[i] << "/" << v[i]/gcd[i] << '\n';
    }

    return 0;
}