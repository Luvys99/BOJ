#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);

	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	int x = 0;
	int ans = 0;
	cin >> x;

	//투 포인터를 사용하기 위해 정렬
	sort(arr, arr + num);
	int start = 0;
	int end = num-1;

	while (start < end)
	{
		if (arr[start] + arr[end] == x)
		{
			ans++;
			start++;
		}
		else if (arr[start] + arr[end] > x)
		{
			end--;
		}
		else
		{
			start++;
		}
	}

	cout << ans;
}

