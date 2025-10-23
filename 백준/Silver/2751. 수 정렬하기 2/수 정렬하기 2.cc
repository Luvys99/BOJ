#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sortnum[1000001];

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) return -1;
	if (num1 > num2) return 1;
	return 0;
}

int main()
{

	int num;
	int arrnum;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arrnum);
		sortnum[i] = arrnum;
	}

	qsort(sortnum, num, sizeof(int), compare);

	for (int i = 0; i < num; i++) printf("%d\n", sortnum[i]);

	return 0;
}