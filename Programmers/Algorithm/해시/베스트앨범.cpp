#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> my_solution(vector<string> genres, vector<int> plays) {
  vector<int> answer;

  map<string, int> m;
  map<int, string> info;
  map<int, int> info2;
  for (int i = 0; i < plays.size(); i++) {
    info[plays[i]] = genres[i];
    info2[plays[i]] = i;
  }

  for (int i = 0; i < genres.size(); i++) {
    m[genres[i]] += plays[i];
  }
  string priority_genre = m.rbegin()->first;

  for (auto it = info.rbegin(); it != info.rend(); it++) {
    if (it->second == priority_genre) answer.push_back(info2[it->first]);
    if (answer.size() == 2) break;
  }
  for (auto it = info.rbegin(); it != info.rend(); it++) {
    if (it->second != priority_genre) answer.push_back(info2[it->first]);
    if (answer.size() == 4) break;
  }

  return answer;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
  vector<int> answer;

  map<string, int> music;
  map<string, map<int, int>> musiclist;

  for (int i = 0; i < genres.size(); i++) {
    music[genres[i]] += plays[i];
    musiclist[genres[i]][i] = plays[i];
  }

  while (music.size() > 0) {
    string genre{};
    int max{0};

    for (auto mu : music) {
      if (max < mu.second) {
        max = mu.second;
        genre = mu.first;
      }
    }

    for (int i = 0; i < 2; i++) {
      int value = 0, index = -1;

      for (auto ml: musiclist[genre]) {
        if (value < ml.second) {
          value = ml.second;
          index = ml.first;
        }
      }

      if (index == -1) break;
      answer.push_back(index);
      musiclist[genre].erase(index);
    }
    music.erase(genre);
  }
  return answer;

  // for (auto i : musiclist) {
  //   cout << i.first << '\n';
  //   for (auto j : i.second) {
  //     cout << j.first << ", " << j.second << '\n';
  //   }
  // }

}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, play;
  vector<int> plays, result;
  string genre;
  vector<string> genres;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> genre;
    genres.push_back(genre);
  }
  for (int i = 0; i < n; i++) {
    cin >> play;
    plays.push_back(play);
  }

  result = solution(genres, plays);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
}