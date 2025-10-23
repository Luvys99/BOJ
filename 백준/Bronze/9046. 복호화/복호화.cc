#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[257];
	int num = 0;

	//정수 입력 받고 버퍼 비우기(scanf, fgets 함수는 엔터키까지 입력 받아짐)
	scanf("%d", &num);
	getchar();

	//정수로 입력 받은 만큼 문자열 입력받기
	for (int i = 0; i < num; i++)
	{
		//문자열 저장할 배열, 알파벳 저장할 배열, 가장 빈도가 높은 숫자와 인덱스를 저장하기 위한 변수
		int alphabet[26] = { 0, };
		int max_count = 0;
		int max_index = 0;
		int count = 0;

		//입력 받고 엔터키 삭제
		fgets(str, sizeof(str), stdin);
		str[strcspn(str, "\n")] = '\0';

		int len = strlen(str);

		//입력받은 문자열에서 a~z까지 비교해서 해당하는 알파벳 인덱스 숫자 1더하기
		for (int j = 0; j < len; j++)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
			{
				alphabet[str[j] - 'a']++;
			}
		}

		//빈도 수가 가장 높은 인덱스 구하기
		for (int j = 0; j < 26; j++)
		{

			if (max_count < alphabet[j])
			{
				max_count = alphabet[j];
				max_index = j;
			}
		}

		//가장 높은 빈도 수를 가진 알파벳이 중복되는지 체크
		for (int j = 0; j < 26; j++)
		{
			if (alphabet[j] == max_count)
			{
				count++;
			}
		}

		//중복이 아니면 해당 알파벳 출력
		if (count == 1)
		{
			printf("%c\n", max_index + 'a');
		}
		//중복이면 ? 출력
		else
		{
			printf("?\n");
		}

	}

	return 0;
}