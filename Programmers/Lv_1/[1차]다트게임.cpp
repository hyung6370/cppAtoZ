#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int prev = 0, score = 0;

    for (int i = 0; i < dartResult.size(); i++) {
        if (dartResult[i] > 47 && dartResult[i] < 58) {
            prev = score;

            if (dartResult[i+1] == '0') {
                score = 10;
                i++;
            }
            else score = dartResult[i] - '0';
        }
        else if (dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') {
            if (dartResult[i] == 'D') {
                score = pow(score, 2);
            }
            else if (dartResult[i] == 'T') {
                score = pow(score, 3);
            }

            if (dartResult[i+1] == '*') {
                answer -= prev;
                prev *= 2;
                score *= 2;
                i++;
                answer += prev;
            }
            else if (dartResult[i+1] == '#') {
                score *= -1;
                i++;
            }

            answer += score;
        }
    }

    return answer;
}

int solution2(string dartResult) {
    stringstream ss(dartResult);

    int sum[3] = { 0, 0, 0 };
    int options[3] = { 1, 1, 1 };

    for (int i = 0; i < 3; i++) {
        int score;
        char bonus, option;

        ss >> score;

        bonus = ss.get();
        option = ss.get();

        if (option != '*' && option != '#') {
            ss.unget();
        }

        switch(bonus) {
            case 'S':
                sum[i] += pow(score, 1);
                break;
            case 'D':
                sum[i] += pow(score, 2);
                break;
            case 'T':
                sum[i] += pow(score, 3);
                break;
            default:
                break;
        }

        switch(option) {
            case '*':
                if (i > 0 && options[i-1]) options[i-1] *= 2;
                options[i] *= 2;
                break;
            case '#':
                options[i] = -options[i];
                break;
            default:
                break;
        }
    }

    return sum[0] * options[0] + sum[1] * options[0] + sum[2] * options[2];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string dartResult;
    cin >> dartResult;

    cout << solution(dartResult);

    return 0;
}