#include <bits/stdc++.h>
using namespace std;

int main()
{

	long long num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2) swap(num1, num2);

	if (num2 == num1 || num2 - num1 == 1) 
		cout << '0';
	else
	{
		long long sub = (num2 - 1) - num1;
		cout << sub << "\n";
		for (long long i = 0; i < sub; i++)
		{
			cout << num1 + 1 + i << " ";
		}
	}

	return 0;
}