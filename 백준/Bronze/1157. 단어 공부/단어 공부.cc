#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

char str[1000000];
int count[26] = { 0 ,};

int main()
{

	//소 대문자 상관없이 문자열 입력받기
	scanf("%s", str);

	int len = strlen(str);

	//입력 받은 길이만큼 반복해서 모두 대문자로 만들고 빈도 카운팅하기
	for(int i = 0; i < len; i++)
	{
		//대문자로 들어오면 그대로 카운팅하기
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count[str[i] - 'A']++;
		}
		//소문자 들어오면 대문자로 바꿔서 카운팅
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			count[str[i] - 'a']++;
		}
	}

	//빈도 수 가장 높은 값 저장하는 변수, 중복 체크 변수, 인덱스 변수 선언
	int max_count = count[0];
	int fair = 0;
	int idx = 0;

	//가장 높은 빈도 수와 인덱스 구함
	for (int i = 0; i < 26; i++)
	{
		if (max_count < count[i])
		{
			max_count = count[i];
			idx = i;
		}
	}

	// 가장 높은 빈도 수 중복 확인
	for (int i = 0; i < 26; i++)
	{
		if (count[i] == max_count)
		{
			fair++;
		}
	}
	
	if (fair == 1)
	{
		printf("%c", idx + 'A');
	}
	else
	{
		printf("%s", "?");
	}

	return 0;
}
