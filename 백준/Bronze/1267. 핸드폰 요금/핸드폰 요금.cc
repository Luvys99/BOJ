#include <bits/stdc++.h>
using namespace std;

int main()
{
	int count, time;
	int resultY = 0;
	int resultM = 0;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> time;
		
		int time2 = time;
		//time 입력 받을 때 마다 초기화
		int opcount1 = 0;
		while (time >= 0)
		{
			time -= 30;
			opcount1++;
		}

		int opcount2 = 0;
		while (time2 >= 0)
		{
			time2 -= 60;
			opcount2++;
		}

		resultY += opcount1 * 10;
		resultM += opcount2 * 15;
	}

	if (resultY < resultM)
	{
		cout << "Y" << " " << resultY;
	}
	else if (resultY > resultM)
	{
		cout << "M" << " " << resultM;
	}
	else if (resultY == resultM)
	{
		cout << "Y" << " " << "M" << " " << resultY;
	}

}