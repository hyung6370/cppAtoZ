#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string my_string) {
    int answer = 0, n = 0;

    for (int i = 0; i < my_string.size(); i++) {
        if (isdigit(my_string[i])) {
            n = n * 10 + my_string[i] - '0';
        }
        else {
            answer += n;
            n = 0;
        }
    }
    answer += n;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string my_string;
    cin >> my_string;

    cout << solution(my_string);


    return 0;
}