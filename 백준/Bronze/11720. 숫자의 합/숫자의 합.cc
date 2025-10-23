#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num;
	scanf("%d", &num);

	char str[101];
	scanf("%s", str);

	int result = 0;

	for (int i = 0; i < num; i++)
	{
		result += (str[i] - '0');
	}
	
	printf("%d", result);

	return 0;
}