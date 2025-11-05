#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);
	stack<int> S;

	//cin도 개행문자까지 읽어드려서 버퍼를 비우기
	int num = 0;
	cin >> num;
	cin.ignore();

	string input;
	while (num > 0)
	{
		//공백있는 문자열 입력받기
		getline(cin, input);
		//C++ 표준으로 문자열을 읽거나 쓸 때 편리한 방법을 제공하고 문자열로부터 값을 추출하거나 문자열에 값을 삽입할 때 사용
		stringstream ss(input);

		//문자열로 받은 input string 에서 공백까지 문자열로 받음
		string command;
		ss >> command;
		
		// 스택에 값만 push함
		if (command == "push")
		{
			//문자열로 받은 input string에서 공백까지 int 값으로 추출함
			int argument;
			ss >> argument;

			S.push(argument);
		}
		// 원래 stack.pop 함수는 스택에서 값만 삭제함 스택이 비어있는데 사용하면 런타임 에러발생
		else if (command == "pop")
		{
			if (S.empty() == 0)
			{
				cout << S.top() << "\n";
				S.pop();
			}
			else
			{
				cout << -1 << "\n";
			}
		}
		// 스택 안에 요소만큼 정수 값을 반환
		else if (command == "size")
		{
			cout << S.size() << "\n";
			
		}
		//비어 있으면 1을 반환하고 채워져있으면 0을 반환함
		else if (command == "empty")
		{
			cout << S.empty() << "\n";
		}
		// 스택의 최상단 요소를 출력하는 함수로 얘도 스택이 비어져 있는데 사용하면 런타임 에러 발생
		else if (command == "top")
		{
			if (S.empty() == 0) cout << S.top() << "\n";
			else cout << -1 << "\n";
		}
		num--;
	}

	return 0;
}