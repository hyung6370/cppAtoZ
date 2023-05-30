#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

string best_solution(vector<string> survey, vector<int> choices) {
    string answer = "";

    int score[8] = { 0, 3, 2, 1, 0, 1, 2, 3 };
    map<char, int> m;

    for (int i = 0; i < survey.size(); i++) {
        m[survey[i][choices[i]/4]] += score[choices[i]];
    }

    answer += m['R'] >= m['T'] ? "R" : "T";
    answer += m['C'] >= m['F'] ? "C" : "F";
    answer += m['J'] >= m['M'] ? "J" : "M";
    answer += m['A'] >= m['N'] ? "A" : "N";

    return answer;
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    unordered_map<char, int> m;

    for (int i = 0; i < survey.size(); i++) {
        if (choices[i] >= 1 && choices[i] <= 3) {
            if (choices[i] == 1) {
                m[survey[i][0]] += 3;
            }
            else if (choices[i] == 2) {
                m[survey[i][0]] += 2;
            }
            else if (choices[i] == 3) {
                m[survey[i][0]] += 1;
            }
        } 
        else if (choices[i] >= 5 && choices[i] <= 7) {
            if (choices[i] == 5) {
                m[survey[i][1]] += 1;
            }
            else if (choices[i] == 6) {
                m[survey[i][1]] += 2;
            }
            else if (choices[i] == 7) {
                m[survey[i][1]] += 3;
            }
        }
        else if (choices[i] == 4) {
            continue;
        }
    }

    int firstV = 0, secondV = 0, thirdV = 0, fourthV = 0;
    char firstC = 'R', secondC = 'C', thirdC = 'J', fourthC = 'A';
    for (const auto& p : m) {
        if (p.first == 'R' || p.first == 'T') {
            if (p.second > firstV) {
                firstV = p.second;
                firstC = p.first;
            }
        }
        else if (p.first == 'C' || p.first == 'F') {
            if (p.second > secondV) {
                secondV = p.second;
                secondC = p.first;
            }
        }
        else if (p.first == 'J' || p.first == 'M') {
            if (p.second > thirdV) {
                thirdV = p.second;
                thirdC = p.first;
            }
        }
        else {
            if (p.second > fourthV) {
                fourthV = p.second;
                fourthC = p.first;
            }
        }
        
    }
    answer = string(1, firstC) + string(1, secondC) + string(1, thirdC) + string(1, fourthC);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    string sdata;
    vector<string> survey;
    vector<int> choices;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> sdata;
        survey.push_back(sdata);
    }
    for (int i = 0; i < n; i++) {
        cin >> data;
        choices.push_back(data);
    }

    cout << best_solution(survey, choices);


    return 0;
}