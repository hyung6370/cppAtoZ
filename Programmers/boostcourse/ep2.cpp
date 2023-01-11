#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int k;
bool compare(const string& a, const string& b) {
    if (a[k] == b[k]) return a < b;
    else return a[k] < b[k];
}

vector<string> solution(vector<string> strings, int n) {
    k = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}
