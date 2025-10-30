#include <bits/stdc++.h>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int arr[4] = {0, };
		int count = 0;

		for (int i = 0; i < 4; i++)
		{
			cin >> arr[i];
			if (arr[i] == 1)
				count++;
		}

		switch (count)
		{
		case 4:
			cout << "E" << "\n";
			break;
		case 3:
			cout << "A" << "\n";
			break;
		case 2:
			cout << "B" << "\n";
			break;
		case 1:
			cout << "C" << "\n";
			break;
		case 0:
			cout << "D" << "\n";
			break;
		}

	}
}