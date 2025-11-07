#include <bits/stdc++.h>
using namespace std;

int paint[502][502] = { 0 };
bool vis[502][502];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);

	int n, m;
	cin >> n >> m;

	// 그림판에 1, 0으로 그림판 갯수만큼 채워서 그림 그리는 코드
	// 공백이나 엔터를 만나면 Skip하고 문자열만 저장해준다 cin을 반복해서 사용하면
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> paint[i][j];
		}
	}

	// 그림의 최대 크기
	int mx = 0;
	// 그림의 수
	int num = 0;

	//먼저 그림판에서 그림을 그릴 수 있는 곳을 찾은 다음에 BFS로 탐색
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//방문했거나 그림이 안 그려진 곳을 지나치면 새로운 그림을 발견한 것
			if (paint[i][j] == 0 || vis[i][j]) continue;
			num++;
			 
			//큐에다가 x,y좌표 데이터를 한 쌍으로 묶어서 저장
			queue<pair<int, int> > Q;
			vis[i][j] = 1;
			Q.push({ i,j });

			// 그림의 넓이
			int area = 0;
			while (!Q.empty())
			{
				//반복될 때마다 그림 하나씩 발견된 것이므로 ++
				area++;
				//현재 위치를 페어형 변수에 저장하고 pop
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++)
				{
					//현재 위치에서 4방향의 좌표 저장
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					// 먼저 좌표 범위부터 검사하고 그다음 방문 여부랑 그림의 존재를 검사
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] || paint[nx][ny] != 1) continue;

					//확인되었으면 방문표시하고 4방향으로 이동된 좌표 큐에 push
					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
			}
			mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;
}