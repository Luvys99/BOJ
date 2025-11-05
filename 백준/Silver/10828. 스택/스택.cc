#define MX 100000
#include <stdio.h>
#include <string.h>

int dat[MX];
int pos = 0;

int main()
{
	
	int num;
	scanf("%d", &num);

	while (num-- > 0)
	{
		char str[100];
		// 문자열은 크기 인자 필수로 넣어야됨 (unsigned int)로
		// %c를 제외한 %s, %d, %f는 입력전 개행문자, 공백을 무시하기 때문에 개행문자 안 없애도 됨
		scanf("%s", str);
		
		// C언어는 무조건 strcmp 문자열 비교로
		if (strcmp(str, "push") == 0)
		{
			int element;
			scanf("%d", &element);
			dat[pos++] = element;
		}
		else if (strcmp(str, "pop") == 0)
		{
			//empty를 대신해서 pos가 0일 때
			if (pos == 0)
			{
				printf("-1\n");
			}
			else
			{
				//pos 값은 top 원소의 +1이기 때문에
				printf("%d\n", dat[pos - 1]);
				pos--;
			}
		}
		else if (strcmp(str, "size") == 0)
		{
			printf("%d\n", pos);
		}
		else if (strcmp(str, "empty") == 0)
		{
			if (pos == 0)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (strcmp(str, "top") == 0)
		{
			if (pos == 0)
			{
				printf("-1\n");
			}
			else
			{
				//pos 값은 top 원소의 +1이기 때문에
				printf("%d\n", dat[pos - 1]);
			}
		}
	}

}