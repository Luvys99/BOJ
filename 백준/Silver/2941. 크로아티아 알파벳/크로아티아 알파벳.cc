#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);

	//문자열을 입력 받는다 그 중에 크로아티아 문자를 포함해서 몇 개의 알파벳이 있는지

	//크로아티아 문자열
	string arr[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	string str;
	cin >> str;

	int count = str.size();

	for (int i = 0; i < 8; i++)
	{
		//해당 크로아티아 알파벳이 없을 때 까지 반복
		while (1)
		{
			size_t pos = str.find(arr[i]);

			if (pos == string::npos)
			{
				break;
			}
			//발견하면 그 자리는 #으로 밀어야지 무한루프에 안 빠짐
			str.replace(pos, arr[i].length(), "#");
		}

	}
	// 크로아티아 알파벳을 하나의 # 문자로 바꿔서 str 길이를 출력해야됨
	cout << str.length();
	

}
