#include <iostream>
#include <string>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;

    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m));

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    vector<int> result;
    cin >> n >> m;

    result = solution(n, m);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ' ';
    }

    return 0;
}