#include <bits/stdc++.h>
using namespace std;


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	// 입력받은 문자열과 찾으려고 하는 문자열을 입력받고 몇 번 등장하는지 세는 변수 선언
	// 중복되어 세는 것은 제외 = 문자열의 위치 상관없이 찾을 수 있지만 겹쳐서 중복적으로 문자열을 찾는 것을 제외시킨다면
	// 처음 찾는 문자열을 발견하고 읽은 뒤 부터 다시 문자열을 세기만 하면 될듯

	string str;
	string word;

	getline(cin, str);
	getline(cin, word);

	int count = 0;
	size_t current_pos = str.find(word);

	while (current_pos != string::npos)
	{
		count++;
		current_pos = str.find(word, current_pos + word.size());
	}
	
	cout << count << '\n';
	return 0;

}