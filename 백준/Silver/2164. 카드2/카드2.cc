#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	// 카드가 1부터 N까지 오름차순으로 존재하고 pop하고 그 다음 카드를 제일 아래로 옮긴다.
	// 이 과정을 반복하고 마지막에 남는 카드를 출력하면 됨
	// 맨 위 카드를 버리고 다음에 맨 위 카드를 맨 밑으로 옮긴다. 라는 로직은 큐와 가까움
	
	queue<int> Q;

	int num;
	cin >> num;

	//1~N까지 번호로 초기화
	for (int i = 1; i <= num; i++)
	{
		Q.push(i);
	}

	while (num-- > 1)
	{
		//맨 위 카드를 버림
		Q.pop();

		//그 다음 맨 위 카드를 큐에 넣음 버림
		int backnum = Q.front();
		Q.push(backnum);
		Q.pop();

	}

	cout << Q.front() << '\n';
}