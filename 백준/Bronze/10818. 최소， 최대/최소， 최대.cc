#include <iostream>
using namespace std;

int main()
{
	
	int num;
	int max, min;

	cin >> num;
	int* arr = new int[num];

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	
	max = arr[0];
	min = arr[0];

	for (int i = 0; i < num; i++)
	{
		if (max < arr[i]) max = arr[i];
		else if (min > arr[i]) min = arr[i];
	}

	cout << min << " " << max;

}	