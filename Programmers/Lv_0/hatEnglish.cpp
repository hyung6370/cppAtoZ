#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v = { "zero", "one", "two", "three", "four",
                    "five", "six", "seven", "eight", "nine" };

long long solution(string numbers) {
    long long answer = 0;

    while (numbers.length() != 0) {
        for (int i = 0; i < v.size(); i++) {
            if (numbers.substr(0, v[i].length()) == v[i]) {
                answer = answer*10 + i;
                numbers = numbers.substr(v[i].length());
            }
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string numbers;
    cin >> numbers;

    cout << solution(numbers);

    return 0;
}