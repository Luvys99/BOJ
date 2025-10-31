#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	int maxnum = max({ arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7] ,arr[8]});
	int index = 0;
	for (int i = 0; i < 9; i++) if (maxnum == arr[i]) index = i+1;
	cout << maxnum << "\n";
	cout << index << "\n";

}