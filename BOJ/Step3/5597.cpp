#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int s_num;
    int* check = 0;
    check = (int*)malloc(sizeof(int) * 31);

    for (int i = 1; i <= 28; i++) {
        cin >> s_num;
        check[s_num] = 1;
    }

    for (int i = 1; i <=30; i++) {
        if (check[i] == 0) {
            cout << i << endl;
        }
    }
    free(check);
    return 0;
}