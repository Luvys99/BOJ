#include <bits/stdc++.h>
using namespace std;

int main()
{

	// 입력은 무조건 영어, 공백, 소괄호, 대괄호만 입력되고 마지막에 온점, 100글자 이하
	// 스택으로 여는 괄호 ( 왼 괄호 )를 만나면 계속 push 하다가 같은 닫는 괄호 ( 오른 괄호 ) 를 만나면 pop 둘다 해버려서 지워버리고
	// 다른 닫는 괄호를 만나면 그대로 NO 출력하면 된다.

	while (1)
	{
		string str;
		getline(cin, str);

		// 반복문 한 사이클 돌때마다 스택 초기화해야되서 while문 안으로
		stack<char> S;
		// no 출력한 후에 조건 유효하지 않은 반복문임을 체크
		bool invaild = true;

		// 온점 하나만 찍으면 입력 종료
		if (str == ".")
			break;

		//문자열 처음부터 끝까지 순회하면서 여는 괄호 만나면 스택에 넣기
		for (char c : str)
		{
			if (c == '(' || c == '[')
			{
				S.push(c);
			}

			// 닫는 괄호를 만나게 되면 짝이 맞는지 확인하고 맞으면 pop하기
			if (c == ')' || c == ']')
			{
				// 스택에 들어온 열린 괄호 없이 닫힌 괄호 먼저 만나면 no 출력
				if (S.empty())
				{
					cout << "no" << '\n';
					invaild = false;
					break;
				}

				if (c == ')')
				{
					if (S.top() == '(')
					{
						S.pop();
					}
					//짝 안 맞으면 no 출력
					else
					{
						cout << "no" << '\n';
						invaild = false;
						break;
					}
				}
				else if (c == ']')
				{
					if (S.top() == '[')
					{
						S.pop();
					}
					//짝 안 맞으면 no 출력
					else
					{
						cout << "no" << '\n';
						invaild = false;
						break;
					}
				}
			}
		}
		// 스택이 비어있고 짝이 맞아서 플래그가 true인 경우
		if (invaild && S.empty())
		{
			cout << "yes" << '\n';
		}
		else if (invaild && S.empty() == 0)
		{
			cout << "no" << '\n';
		}
	}


	return 0;
}