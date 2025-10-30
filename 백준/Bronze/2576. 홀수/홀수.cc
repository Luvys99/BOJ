#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[7];
	int minarr[7];
	int sum = 0;
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 != 0)
		{
			sum += arr[i];
			minarr[count] = arr[i];
			count++;
		}
	}
	sort(minarr, minarr+count);
	if (count == 0) cout << -1;
	else
	{
		cout << sum << "\n"; 
		cout << minarr[0];
	}
	


}