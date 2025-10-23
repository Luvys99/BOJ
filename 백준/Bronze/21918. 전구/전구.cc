#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int bulb[4001] = { 0, };
	int s = 0;
	int bulbnum;
	int instruction;
	int instnum;
	int l, r = 0;

	scanf("%d %d", &bulbnum, &instruction);

	if (instruction > 4000)
	{
		return 0;
	}

	for (int i = 1; i <= bulbnum; i++)
	{
		scanf("%d", &s);
		if (s == 0 || s == 1)
		{
			bulb[i] = s;
		}
	}

	for (int j = 1; j <= instruction; j++)
	{
		scanf("%d %d %d", &instnum, &l, &r);

		if (instnum == 1)
		{
			int i = l;
			int x = r;
			bulb[i] = x;
		}
		else if (instnum == 2)
		{
			for (int i = l; i <= r; i++)
			{
				if (bulb[i] == 0)
				{
					bulb[i] = 1;
				}
				else
				{
					bulb[i] = 0;
				}
			}
		}
		else if (instnum == 3)
		{
			for (int i = l; i <= r; i++)
			{
				bulb[i] = 0;
			}
		}
		else if (instnum == 4)
		{
			for (int i = l; i <= r; i++)
			{
				bulb[i] = 1;
			}
		}
	}

	for (int i = 1; i <= bulbnum; i++)
	{
		printf("%d ", bulb[i]);
	}

	return 0;
}