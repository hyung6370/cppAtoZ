#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int map[25][25] = {0};
bool visited[25][25];

int dx[] = {0, 1, 0, -1};//12시부터 시계방향
int dy[] = {-1, 0, 1, 0};

int bfs(int x, int y) {
	visited[x][y] = true;
	int count = 0;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 0 && yy >= 0 && xx < N && yy < N && map[xx][yy] == 1 && !visited[xx][yy]) {
			visited[xx][yy] = true;
			count++;
			count += bfs(xx, yy);
		}
	}
	return count;
}
int main(void) {
	cin >> N;

	//입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	//수행
	vector<int> answer;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 1 && !visited[i][j]) answer.push_back(bfs(i, j));
		}
	}

	//출력
	sort(answer.begin(), answer.end());
	int size = 0;
	size = answer.size();
	cout << answer.size() << endl;
	for (int v : answer) {
		cout << v+1 << endl;
	}
	return 0;
}