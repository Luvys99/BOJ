#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		for (int j = T; j > i; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
}