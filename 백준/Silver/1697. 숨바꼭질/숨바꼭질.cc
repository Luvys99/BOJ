#include <bits/stdc++.h>
using namespace std;

int arr[100002] = { 0 };
int dx[3] = { -1, 1, 2 };
int nx;
int ans;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);

	int N, K;
	cin >> N >> K;
	
	queue<int> q;
	q.push(N);
	arr[N] = 0;
	int time = 0;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		if (cur == K)
		{
			ans = arr[cur];
			break;
		}

		time = arr[cur];
		for (int i = 0; i < 3; i++)
		{

			if (i < 2)
			{
				nx = cur + dx[i];
			}
			else
			{
				nx = cur * dx[i];
			}

			if (nx >= 100002 || nx < 0)
			{
				continue;
			}
			if (arr[nx] != 0)
			{
				continue;
			}
			arr[nx] = time+1;
			q.push(nx);

		}

	}

	cout << ans;

}