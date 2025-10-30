#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1 == num2 && num2 == num3) cout << 10000 + (num1 * 1000);
	else if (num1 == num2 || num2 == num3 || num1 == num3)
	{
		if (num1 == num2) cout << 1000 + (num1 * 100);
		else cout << 1000 + (num3 * 100);
	}
	else
	{
		int maxnum = max({ num1, num2 , num3 });
		cout << maxnum * 100;
	}
}