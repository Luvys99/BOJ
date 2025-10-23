#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char str[1001];
	fgets(str, sizeof(str), stdin);
	
	int num;
	scanf("%d", &num);
	
	printf("%c", str[num - 1]);
	
	return 0;
}