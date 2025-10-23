#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	scanf("%s", str);

	int len = strlen(str);

	printf("%d", len);
}