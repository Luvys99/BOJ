#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		for (int j = T; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}