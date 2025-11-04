#include <stdio.h>
#include <string.h>

int main()
{
	
	char str[2502] = { 0 };
	char ans[52] = { 0 };

	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	fgets(ans, sizeof(ans), stdin);
	ans[strcspn(ans, "\n")] = '\0';

	int len = strlen(ans);
	int Count = 0;

	if (len == 0)
	{
		printf("0\n");
		return 0;
	}

	char* current_pos = str;
	char* found;

	while ((found = strstr(current_pos, ans)) != NULL)
	{
		Count++;
		current_pos = found + len;
	}

	printf("%d\n", Count);
	return 0;
}