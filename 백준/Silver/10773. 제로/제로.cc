#include <bits/stdc++.h>
using namespace std;

int main()
{
   
	cin.tie(0);
	ios_base::sync_with_stdio(NULL);
	// 장부에 돈을 넣는데 0원을 넣으면 잘못 기입한 것으로 최근 값을 삭제하고 0원이 아니면 그대로 기입하는 특징이 스택과 일치함
	// 조건에 따른 push, pop만 하면 되기 때문
	// 잘못 기입한 돈의 합을 구하는 문제
	stack<int> S;

	int num;
	cin >> num;
	cin.ignore();

	//잘못 기입한 돈의 합
	int sum = 0;

	while (num--)
	{
		int money;
		cin >> money;
		cin.ignore();

		//돈이 0원이 기입되고 장부에 돈이 기입이 되어 있다면
		if ((money == 0) && (S.empty() == 0))
		{
			S.pop();
		}
		else
		{
			S.push(money);
		}
	}

	// 남아있는 장부의 돈의 합 계산
	while (S.empty() == 0)
	{
		sum += S.top();
		S.pop();
	}

	cout << sum;

}