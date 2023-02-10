#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str, result;
    cin >> str;
    reverse(str.begin(), str.end());

    cout << str;
}