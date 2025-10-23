#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	int num2;

	scanf("%d %d", &num1, &num2);

	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	printf("%d\n", num1 % num2);

}