#include <bits/stdc++.h>
using namespace std;

// 미로에 대한 데이터를 붙어서입력을 해야하므로 이중 for문올 cin를 받는 것이 아닌 string으로 한줄 씩 입력을 받는다.
// string 배열 갯수가 미로의 n 길이가 되는 것
string miro[102];
int dist[102][102];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);

	int n, m;
	cin >> n >> m;
	
	// 미로에 대한 데이터 입력
	// 세로
	for (int i = 0; i < n; i++)
	{
		cin >> miro[i];
	}
	// dist 배열을 -1로 모두 초기화
	// 0으로 초기화 해도 상관없지만 dist배열을 vis배열로 대신 사용하기 위해 -1로 초기화
	memset(dist, -1, sizeof(dist));

	// 좌표를 저장할 큐, pair로 좌표를 한 쌍의 데이터로 관리
	queue<pair<int, int> > Q;
	// 시작지점 push
	Q.push({ 0,0 });
	// 시작지점 방문표시와 거리 길이 데이터 저장
	dist[0][0] = 0;

	// Queue가 빌 때까지 반복
	while (!Q.empty())
	{
		// 현재 좌표 저장
		auto cur = Q.front();
		Q.pop();

		//4방향으로 +1씩 좌표 이동 후에 큐에 저장
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			// 큐에 저장하기 전에 범위를 벗어났는지 길이 맞는지 지나갔던 곳인지 체크
			// 조건에 부합하지 않으면 continue로 for문을 벗어나 다음 큐를 꺼냄
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (dist[nx][ny] >= 0 || miro[nx][ny] != '1') continue;

			// 길을 지나갔다면 depth +1
			// 이전 길의 depth ( 길이 ) 에서 1 증가
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			// 마지막으로 찾는 좌표 푸쉬
			Q.push({ nx, ny });
		}
	}
	// 한 칸당 길이 1인데 최소 지나야 하는 칸 수라서 지나온 횟수에서 + 1
	cout << dist[n - 1][m - 1] + 1;

}