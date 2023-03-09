#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string my_string) {
    string answer = "";

    for (auto i : my_string) {
        if (answer.find(i) == std::string::npos) answer += i;
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
