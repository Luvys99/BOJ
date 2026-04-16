#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	
	char* str = new char[1000001];
	int count = 0;
	cin.getline(str, 1000001);
	
	// 첫 공백은 넘기기
	if (*str == ' ') str++;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			count++;
		}
		str++;
	}
	
	// 마지막 문자 끝에 공백이 존재하면 카운트가 올라가기 때문에 널문자 앞의 문자가 공백이면 count X
	// strlen은 널문자를 제외한 문자열의 길이를 반환해주는 함수여서 -1 을 하면 널문자 앞의 문자를 가르키게 됨
	if (str[strlen(str) - 1] != ' ')
	{
		count++;
	}
	cout << count;

	return 0;
}	