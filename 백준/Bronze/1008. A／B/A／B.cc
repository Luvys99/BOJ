#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	double num1;
	double num2;
	double sub;

	scanf("%lf %lf", &num1, &num2);

	sub = num1 / num2;

	printf("%.15lf", sub);
}