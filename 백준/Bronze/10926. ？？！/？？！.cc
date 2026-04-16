#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int BUF_SIZE = 100;
	char* str = new char[BUF_SIZE];
	const char* str2 = "??!";
	cin >> str;

	// strcat, strncat 안전하지 않기 때문에 _s를 붙인 함수 사용
	// dest 문자의 남은 공간을 계산하지 않고 인자 받은 그대로 집어넣고 강제로 널 문자를 추가해서 오버플로우가 발생할 가능성이 있다.
	// _s 버전은 복사할 버퍼의 크기를 계산해서 추가될 문자열의 크기가 넘지 않도록 계산해줌 
	// 배열은 크기를 컴파일러가 알 수 있지만 동적할당을 받는다면 크기까지 인자로 따로 넣어 줘야 함
	// strncat의 n은 복사할 문자열의 길이보단 복사할 수 있는 남은 공간을 인자로 전달하므로써 오버플로우 되지 않게 하는 것
	strncat(str, str2, BUF_SIZE - strlen(str) - 1);

	cout << str;
	delete[]str;
	return 0;
	
}	