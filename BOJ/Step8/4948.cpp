#include <iostream>
#include <vector>
using namespace std;

// 시간초과 코드
int main(int argc, char* argv[]) {
    int n;
    int count;
    int prime_num;
    vector<int> v;

    while(1) {
        cin >> n;
        if (n == 0) break;
        prime_num = 0;
        for (int i = n; i <= 2*n; i++) {
            count = 0;
            for (int j = 2; j <= i; j++) {
                if (i % j == 0 && i > n) 
                    count++;
            }
            if (count == 1) {
                prime_num++;
            }
        }
        v.push_back(prime_num);
        // cout << prime_num << endl;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}