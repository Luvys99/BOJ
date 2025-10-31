#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = T; i > 0; i--)
	{
		for (int j = 0; j < T - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 2; i <= T; i++)
	{
		for (int j = 1; j <= T - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "*";
		}
		
		cout << "\n";
	}

}