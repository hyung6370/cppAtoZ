#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        string word;
        cin >> word;
        
        int count = 0;
        int left = 0;
        int right = word.length()-1;
        bool flag = true;

        for (; left <= right; left++, right--) {
            count++;
            if (word[left] != word[right]) {
                flag = false;
                break;
            }
        }

        cout << (flag ? 1 : 0) << " " << (flag && word.length() % 2 == 0 ? count+1 : count) << endl;
    }

    return 0;
}