#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ostringstream oss;
    string s1 = "abc", s2 = "gjw";
    int i1 = 19234;
    double d1 = 3.591;
    oss << s1 << '\n' << i1 << '\n' << s2 << '\n' << d1;  // 문자열을 붙인다.

    cout << oss.str();  // 문자열을 꺼낸다.

    return 0;
}