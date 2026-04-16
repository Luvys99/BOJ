#include <iostream>
using namespace std;

int main()
{
	
	int hour, minute;
	cin >> hour >> minute;

	int cookingtime;
	cin >> cookingtime;

	while (cookingtime > 60)
	{
		if (cookingtime >= 60)
		{
			hour++;
			if (hour >= 24)
			{
				hour -= 24;
			}
			cookingtime -= 60;
		}

	}

	minute += cookingtime;
	if (minute >= 60)
	{
		minute -= 60;
		hour++;
		if (hour >= 24)
		{
			hour -= 24;
		}
	}

	cout << hour << " " << minute;
}	