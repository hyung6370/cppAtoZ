#include <iostream>
#include <sstream>
#include <string>
using namespace std;


// int main() {
//     istringstream iss("test\n123 aaa 456");
//     string s1, s2;
//     int i1, i2;
//     iss >> s1 >> i1 >> s2 >> i2; // 문자열을 파싱하고 변수형에 맞게 변환한다.

//     cout << s1 << '\n'; // test
//     cout << i1 << '\n'; // 123
//     cout << s2 << '\n'; // aaa
//     cout << i2 << '\n'; // 456

//     return 0;
// }


int main() {
    string str1 = "1D2S#10S";
    string str2 = "1111DAWV2S#10S";

    istringstream iss1(str1);
    istringstream iss2(str2);
    int num1, num2;

    while (iss1 >> num1) cout << num1 << " ";
    cout << '\n';

    while (iss2 >> num2) cout << num2 << " ";
    cout << '\n';


    istringstream iss3(str3);
    istringstream iss4(str4);
    char ch1, ch2;

    while (iss3 >> ch1) cout << ch1 << " ";
    cout << '\n';
    while (iss4 >> ch2) cout << ch2 << " ";
    cout << '\n';

    return 0;
}