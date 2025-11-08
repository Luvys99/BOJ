#include <bits/stdc++.h>
using namespace std;

// 미로를 문자로 벽, 지훈, 불, 지나갈 수 있는 공간을 나타냄
string miro[1001];
int Fdist[1001][1001];
int Jdist[1001][1001];
int dx[4] = { 1, 0, -1 ,0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	int R, C;
	cin >> R >> C;

	// 한 줄씩 공백없이 미로 내의 좌표 입력받기
	for (int i = 0; i < R; i++)
	{
		cin >> miro[i];
	}
	// 지훈이랑 불의 좌표를 따로 저장
	queue<pair<int, int> > QF;
	queue<pair<int, int> > QJ;
	memset(Fdist, -1, sizeof(Fdist));
	memset(Jdist, -1, sizeof(Jdist));

	// 지훈이 위치랑 불이 난 위치 찾기
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			// 불이 퍼지는 시간을 먼저 구해야 지훈이가 그 시간과 비교해서 탈출할 루트를 발견할 수 있다.
			// 또 불애 두 개 이상인 경우도 구하려면 F를 만나자마자 BFS 돌려버리면 두 번째 F 만났을 때 불이 번지는 시간이 틀려지게 되서 
			// 한 번에 불이 일어난 좌표를 모두 찾아서 큐에 집어넣어야 한다.
			if (miro[i][j] == 'F')
			{
				QF.push({ i,j });
				Fdist[i][j] = 0;
			}
			if (miro[i][j] == 'J')
			{
				QJ.push({ i,j });
				Jdist[i][j] = 0;
			}
		}
	}

	//불에 대한 BFS
	while (!QF.empty())
	{
		auto cur = QF.front();
		QF.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
			// 불이 지나간 곳과 갈 수 없는 곳 제외
			// 지훈이가 지나간 곳도 지나갈 수 있음
			if (Fdist[nx][ny] >= 0 || miro[nx][ny] == '#') continue;
			Fdist[nx][ny] = Fdist[cur.first][cur.second] + 1;
			QF.push({ nx, ny });
		}
	}

	// 지훈에 대한 BFS
	while (!QJ.empty())
	{
		auto cur = QJ.front();
		QJ.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
						
			// 범위를 벗어났다면 탈출에 성공한 것
			if (nx < 0 || nx >= R || ny < 0 || ny >= C)
			{
				// nx, ny는 범위 밖이기 때문에 접근을 못하기 때문에 직전 공간 + 1
				cout << Jdist[cur.first][cur.second] + 1;
				return 0;
			}
			if (Jdist[nx][ny] >= 0 || miro[nx][ny] == '#') continue;
			// 불이 이미 지나간 곳은 못가고 불이 먼저 도착하거나 동시에 만난 공간은 못감
			// Fdist 불은 이미 지나가면서 몇 분에 이 공간에 도달하는지 알 수 있지만
			// Jdist는 nx, ny로 비교하면 그 공간은 가르키지만 지나갈 수 있는지 확인 중이라 아직 시간이 측정되지 않아서 이전 공간에서 +1해서 비교
			if (Fdist[nx][ny] != -1 && Fdist[nx][ny] <= Jdist[cur.first][cur.second]+1) continue;
			Jdist[nx][ny] = Jdist[cur.first][cur.second] + 1;
			QJ.push({ nx, ny });
		}
	}
			
	// 범위 밖으로 탈출 못하고 큐가 비어버리면 탈출 못하고 갇힌 것
	cout << "IMPOSSIBLE";
}