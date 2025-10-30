#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	int avg = sum / 5;
	sort(arr, arr + 5);
	cout << avg << "\n";
	cout << arr[2] << "\n";

}