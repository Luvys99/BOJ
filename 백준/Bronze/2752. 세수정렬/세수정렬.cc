#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	if (arr[0] > arr[1])
	{
		int temp = arr[1];
		arr[1] = arr[0];
		arr[0] = temp;
	}
	if (arr[1] > arr[2])
	{
		int temp = arr[2];
		arr[2] = arr[1];
		arr[1] = temp;
	}
	if (arr[0] > arr[1])
	{
		int temp = arr[1];
		arr[1] = arr[0];
		arr[0] = temp;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}
}