#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream ss(my_string);
    ss >> answer;

    int n;
    char c;
    
    while (ss >> c >> n) {
        if (c == '+') answer += n;
        else answer -= n;
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