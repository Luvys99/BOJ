#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[102];

	while (fgets(str, sizeof(str), stdin) != NULL)
	{
		printf("%s", str);
	}

	return 0;
}