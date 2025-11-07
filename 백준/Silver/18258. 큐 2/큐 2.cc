#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int dat[2000001];
int head = 0;
int tail = 0;

int main()
{
	
	int num;
	scanf("%d", &num);

	char str[10];

	while (num--)
	{

		scanf("%s", str);

		if (strcmp(str, "push") == 0)
		{
			int num1;
			scanf("%d", &num1);
			dat[tail++] = num1;
		}
		else if (strcmp(str, "pop") == 0)
		{
			if (head == tail)
			{
				printf("-1\n");
			}
			if (tail > head)
			{
				printf("%d\n", dat[head]);
				head++;
			}
		}
		else if (strcmp(str, "size") == 0)
		{
			printf("%d\n", (tail - head));
		}
		else if (strcmp(str, "empty") == 0)
		{
			if (head == tail)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (strcmp(str, "front") == 0)
		{
			if (head == tail)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", dat[head]);
			}
		}
		else if (strcmp(str, "back") == 0)
		{
			if (head == tail)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", dat[tail - 1]);
			}
		}

	}

	return 0;

}