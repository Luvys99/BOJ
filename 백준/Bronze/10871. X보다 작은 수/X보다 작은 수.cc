#include <bits/stdc++.h>
using namespace std;

int arr[10000];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);

	int N, X;
	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (arr[i] < X)
		{
			cout << arr[i] << " ";
		}
	}



}

