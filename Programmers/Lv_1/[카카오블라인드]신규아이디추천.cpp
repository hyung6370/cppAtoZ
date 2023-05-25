#include <iostream>
#include <string>
#include <vector>
using namespace std;

string first_step(string id) {
    for (int i = 0; i < id.size(); i++) {
        if (id[i] >= 'A' && id[i] <= 'Z') {
            id[i] += 32;
        }
    }
    return id;
}

string second_step(string id) {
    string result = "";
    for (int i = 0; i < id.size(); i++) {
        if (islower(id[i]) || isdigit(id[i]) || id[i] == '-' || id[i] == '_' || id[i] == '.') {
            result += id[i];
        }
        else continue;
    }
    return result;
}

string third_step(string id) {
    string result = "";
    result += id[0];
    for (int i = 1 ; i < id.size(); i++) {
        if (id[i] == '.' && id[i-1] == '.') continue;
        else result += id[i];
    }
    return result;
}

string fourth_step(string id) {
    if (id[0] == '.') id.erase(id.begin() + 0);
    if (id[id.size()-1] == '.') id.erase(id.begin() + (id.size()-1));
    return id;
}

string fifth_step(string id) {
    if (id.size() == 0) id += 'a';
    return id;
}

string sixth_step(string id) {
    string result = "";
    for (int i = 0; i < 15; i++) {
        result += id[i];
    }
    if (result[result.size()-1] == '.') result.pop_back();
    return result;
}

string seventh_step(string id) {
    if (id.size() <= 2) {
        while (id.size() != 3) {
            id += id[id.size()-1];
        }
    }
    return id;
}

string solution(string new_id) {
    string answer = "";

    answer = first_step(new_id);
    answer = second_step(answer);
    answer = third_step(answer);
    answer = fourth_step(answer);
    answer = fifth_step(answer);
    if (answer.size() >= 16) answer = sixth_step(answer);
    answer = seventh_step(answer);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string new_id;
    cin >> new_id;
    cout << '\n';
    cout << solution(new_id);

    return 0;
}