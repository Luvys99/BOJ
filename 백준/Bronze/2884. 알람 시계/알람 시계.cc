#include <iostream>
using namespace std;

int main()
{
	
	int Hour, Minite;
	cin >> Hour >> Minite;

	if (Minite >= 45)
	{
		Minite -= 45;
		cout << Hour << " " << Minite;
	}
	else
	{
		int val = 45 - Minite;
		Minite = 60 - val;

		if (Hour == 0)
		{ 
			Hour = 23;
		}
		else
		{
			Hour -= 1;
		}

		cout << Hour << " " << Minite;

	}


}	