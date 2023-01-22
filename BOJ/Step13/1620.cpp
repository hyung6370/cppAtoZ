#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string, int> pokemon;
    vector<string> name;
    int N, M;
    string temp;
    vector<string> result;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> temp;
        name.push_back(temp);
        pokemon.insert(make_pair(temp, i));
    }

    for (int i = 0; i < M; i++) {
        cin >> temp;

        if (temp[0] >= 65 && temp[0] <= 90) {
            result.push_back(to_string(pokemon[temp]));
        }
        else {
            result.push_back(name[stoi(temp)-1]);
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }

    return 0;
}