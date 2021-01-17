#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int N, M, arr[MAX][MAX], dx[4] = { 0, 0, -1, 1 }, dy[4] = { -1, 1, 0 ,0 };
bool visit[MAX][MAX][2] = { false, };

int BFS() {
	queue<pair<pair<int, int>, pair<int, int>>> que;
	que.push(make_pair(make_pair(0, 0), make_pair(1, 1)));
	visit[0][0][1] = true;
	while (!que.empty()) {
		int x = que.front().first.first;
		int y = que.front().first.second;
		int wall = que.front().second.first;
		int cnt = que.front().second.second;
		que.pop();
		if (x == N - 1 && y == M - 1) return cnt;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (arr[nx][ny] == 1 && wall == 1) {
				visit[nx][ny][wall] = true;
				que.push(make_pair(make_pair(nx, ny), make_pair(wall - 1, cnt + 1)));
			}
			if (arr[nx][ny] == 0 && !visit[nx][ny][wall]) {
				visit[nx][ny][wall] = true;
				que.push(make_pair(make_pair(nx, ny), make_pair(wall, cnt + 1)));
			}
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string temp; cin >> temp;
		for (int j = 0; j < M; j++) arr[i][j] = temp[j] - '0';
	}
	cout << BFS();
	return 0;
}