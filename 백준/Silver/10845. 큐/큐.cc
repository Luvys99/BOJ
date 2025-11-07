#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);
	queue<int> Q;

	int num;
	cin >> num;

	string str;

	while (num--)
	{

		cin >> str;

		if (str == "push")
		{
			int num1;
			cin >> num1;
			Q.push(num1);
		}
		else if (str == "pop")
		{
			if (Q.empty() != 1)
			{
				cout << Q.front() << '\n';
				Q.pop();
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if (str == "size")
		{
			cout << Q.size() << '\n';
		}
		else if (str == "empty")
		{
			if (Q.empty() != 1)
			{
				cout << 0 << '\n';
			}
			else
			{
				cout << 1 << '\n';
			}
		}
		else if (str == "front")
		{
			if (Q.empty() != 1)
			{
				cout << Q.front() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if (str == "back")
		{
			if (Q.empty() != 1)
			{
				cout << Q.back() << '\n';
			}
			else
			{
				cout << -1 << '\n';
			}
		}

	}

	return 0;
}