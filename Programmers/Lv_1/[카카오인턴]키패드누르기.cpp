#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    int leftPos = 10;
    int rightPos = 12;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            answer += "L";
            leftPos = numbers[i];
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            answer += "R";
            rightPos = numbers[i];
        }
        else { 
            if (numbers[i] == 0) numbers[i] = 11;

            int leftLen = abs(numbers[i]-leftPos)/3 + abs(numbers[i]-leftPos)%3;
            int rightLen = abs(numbers[i]-rightPos)/3 + abs(numbers[i]-rightPos)%3;

            if (leftLen < rightLen) {
                answer += "L";
                leftPos = numbers[i];
            }
            else if (leftLen > rightLen) {
                answer += "R";
                rightPos = numbers[i];
            }
            else {
                if (hand == "left") {
                    answer += "L";
                    leftPos = numbers[i];
                }
                else {
                    answer += "R";
                    rightPos = numbers[i];
                }
            }
        }
        
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    string hand;
    vector<int> numbers;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        numbers.push_back(data);
    }
    cin >> hand;

    cout << solution(numbers, hand);

    return 0;
}