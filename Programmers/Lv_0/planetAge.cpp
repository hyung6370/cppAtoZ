#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(int age) {
    string answer = "";
    string sAge = to_string(age);

    for (int i = 0; i < sAge.size(); i++) {
        answer += (sAge[i] + 49);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int age;
    cin >> age;

    cout << solution(age);
    
    return 0;
}