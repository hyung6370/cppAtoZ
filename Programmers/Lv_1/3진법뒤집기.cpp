#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string reverse_ternary(int n) {
    string ternaryNum = "";
    vector<int> v;
    while (n > 2) {
        v.push_back(n % 3);
        n /= 3;
    }
    v.push_back(n);
    
    for (int i = 0; i < v.size(); i++) {
        ternaryNum += to_string(v[i]);
    }
    return ternaryNum;
}

int ternary_to_decimal(string ternaryNum) {
    int answer = 0;

    for (int i = ternaryNum.size()-1; i >= 0; i--) {
        answer += ((ternaryNum[i]-'0') * pow(3, ternaryNum.size()-1-i));
    }

    return answer;
}

int solution(int n) {
    int answer = 0;
    string s = "";
    s = reverse_ternary(n);
    answer = ternary_to_decimal(s);
    return answer;
}


int solution2(int n) {
    int answer = 0;
    vector<int> v;

    while (n > 0) {
        v.push_back(n % 3);
        n /= 3;
    }
    int k = 1;
    while (!v.empty()) {
        answer += k * v.back();
        v.pop_back();
        k *= 3;
    }

    return answer;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << solution(n);

    return 0;
}