#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	
	char str[101];
	int alphabet[26];

	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = -1;
	}
	cin.getline(str, 101);

	size_t len = strlen(str);

	//문자 길이만큼 하나씩 검사, i가 몇 번째 글자인지 나타냄
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 26; j++) // j는 알파벳 순서
		{
			if (str[i] == 'a' + j)
			{
				// 처음 등장하는 위치니까 처음 만나기만 하면 인덱스를 값으로 넣어주면 됨
				if (alphabet[j] != -1)
				{
					continue;
				}
				alphabet[j] = i;
				break;
			}
			
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] << " ";
	}
}	