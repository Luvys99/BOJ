#include <bits/stdc++.h>
using namespace std;

int tomato[1002][1002];
int date[1002][1002];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);

	int n, m;
	cin >> m >> n;

	// 토마토 상태 입력 받기 ( 공백 존재 )
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tomato[i][j];
		}
	}
	// 며칠 지났는지 저장하는 배열
	memset(date, -1, sizeof(date));
	queue<pair<int, int> > Q;

	// 토마토 상자를 찾아보면서 익은 토마토 위치를 찾고 그 위치에서 BFS 알고리즘으로 탐색 시작 ( 시작 점이 여러 개 인 것 )
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			// 익은 토마토 발견하면 좌표를 큐에 저장
			// 시작 점을 좌표에 연속으로 넣어 놓으면 BFS 로직이 시작점을 한 번씩 번갈아가면서 탐색하게 됨
			if (tomato[i][j] == 1)
			{
				Q.push({ i,j });
				date[i][j] = 0;
			}
		}
	}

	while (!Q.empty())
	{
		auto cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			// 토마토 상자에 토마토가 없거나 이미 익은 곳은 패스
			if ( tomato[nx][ny] != 0 || date[nx][ny] >= 0) continue;

			// 한 사이클 지나면 하루가 지난 것이므로 1로 변경
			tomato[nx][ny] = 1;
			// 하루 지날 때마다 지난 그 시점의 배열 위치에 + 1
			// 동시에 여러 시작점에서 출발하기 때문에 만나면 더 익을 토마토가 없게 된 것이므로 그 날짜에 전부 다 토마토가 익었다면 그 날짜가 정답
			date[nx][ny] = date[cur.first][cur.second] + 1;
			Q.push({ nx, ny });

		}

	}

	// 익지 않은 토마토가 있다면 -1 출력
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (tomato[i][j] == 0)
			{
				cout << -1 << '\n';
				return 0;
			}
			ans = max(ans, date[i][j]);
		}
	}
	cout << ans;
}