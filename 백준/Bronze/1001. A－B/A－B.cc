#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int sub;

	scanf("%d %d", &num1, &num2);

	sub = num1 - num2;

	printf("%d", sub);
}