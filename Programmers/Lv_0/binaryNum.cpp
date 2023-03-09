#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string toBinary(int num) {
    string result = "";
    if (!num) return "0";
    while (num > 0) {
        if (num % 2 == 1) result = "1" + result;
        else result = "0" + result;
        num >>= 1;
    }
    return result;
}

int binaryNumAddResult(string bin) {
    int value = 0;
    int check = stoi(bin);
    if (check == 0) return 0;

    for (int i = 0; i < bin.size(); i++) {
        if (bin[i] == '1') {
            value += pow(2, bin.size()-1-i);
        }
        else continue;
    }
    return value;
}

string solution(string bin1, string bin2) {
    string answer;
    int binNum = 0;

    binNum = binaryNumAddResult(bin1) + binaryNumAddResult(bin2);
    
    answer = toBinary(binNum);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string bin1, bin2;
    cin >> bin1 >> bin2;
    

    cout << solution(bin1, bin2);

    return 0;
}