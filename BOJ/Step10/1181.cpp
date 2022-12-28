#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    else return a.length() < b.length();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    vector<string> v;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        string word;
        cin >> word;

        if (find(v.begin(), v.end(), word) == v.end()) {
            v.push_back(word);
        }
    }
    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

}