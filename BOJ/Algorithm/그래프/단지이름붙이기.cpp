#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int map[25][25] = {0};
bool visited[25][25];

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int dfs(int x, int y) {
	visited[x][y] = true;
	int count = 0;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 0 && yy >= 0 && xx < N && yy < N && map[xx][yy] == 1 && !visited[xx][yy]) {
			visited[xx][yy] = true;
			count++;
			count += dfs(xx, yy);
		}
	}
	return count;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	vector<int> answer;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 1 && !visited[i][j]) answer.push_back(dfs(i, j));
		}
	}

	sort(answer.begin(), answer.end());

	int size = 0;
	size = answer.size();
	cout << size << '\n';

	for (int v : answer) {
		cout << v+1 << '\n';
	}

	return 0;
}