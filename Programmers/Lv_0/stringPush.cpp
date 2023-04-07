#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string A, string B) {
    char a;
    int count = 0;
    if (A == B) return 0;
    for (int i = 0; i < A.size(); i++) {
        a = A[A.size()-1];
        for (int j = A.size()-1; j > 0; j--) {
            A[j] = A[j-1];
        }
        A[0] = a;
        count++;
        if (A == B) return count;
    }
    return -1;
}

/*
int solution2(string A, string B) {
    B += B;
    return B.find(A);
}
*/

// rotate 함수

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string A, B;
    cin >> A >> B;

    cout << solution(A, B);

    return 0;
}