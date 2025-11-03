#include <bits/stdc++.h>
using namespace std;

int main()
{
	// 입력으로 주어지는 정수Inputv와 찾으려고 하는 정수 Findv는 -100부터 100까지 입력 가능
	int Num;
	cin >> Num;

	int arr[101];
	for (int i = 0; i < Num; i++)
	{
		cin >> arr[i];
	}

	int v;
	cin >> v;

	int iCount = 0;
	for (int i = 0; i < Num; i++)
	{
		if (arr[i] == v)
		{
			iCount++;
		}
	}

	cout << iCount;
}