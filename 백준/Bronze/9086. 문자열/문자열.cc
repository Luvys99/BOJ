#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int testnum;
	char str[1000] = { 0, };
	int len = 0;

	scanf("%d", &testnum);
	for (int i = 0; i < testnum; i++)
	{
		scanf("%s", str);
		len = strlen(str);
		printf("%c%c\n", str[0], str[len-1]);
	}

}