#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    int n = 0, idx = 0;
    char c;

    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] >= '0' && my_string[i] <= '9') {
            n = n*10 + my_string[i] - '0';
        }
        else {
            idx = i;
            answer += n;
            n = 0;
            break;
        }
    }

    

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string my_string;
    getline(cin, my_string);

    cout << solution(my_string);

    return 0;
}