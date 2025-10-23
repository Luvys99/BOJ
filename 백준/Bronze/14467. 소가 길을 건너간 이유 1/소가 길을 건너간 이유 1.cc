#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{

	int num;
	int count = 0;
	int cow[11];

	memset(cow, -1, sizeof(cow));

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int cownum;
		int cowlocate;

		scanf("%d %d", &cownum, &cowlocate);

		if (cow[cownum] != -1 && cow[cownum] != cowlocate)
		{
			count++;
		}
		cow[cownum] = cowlocate;
	
	}
	printf("%d", count);

}