#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    vector<string> v;
    string value;
    string op;
    stringstream stream(my_string);

    while(stream >> value) {
        try {
            if (stoi(value) >= 0 && stoi(value) <= 20000) v.push_back(value);
        }
        catch(...) {
            if (value == "\"") continue;
            else op = value;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // if (op == "+") {
    //     for (int i = 0; i < v.size(); i++) {
    //         answer += stoi(v[i]);
    //     }
    // }
    // else if (op == "-") {
    //     for (int i = 0; i < v.size(); i++) {
    //         answer -= stoi(v[i]);
    //     }
    // }

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