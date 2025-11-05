#include <bits/stdc++.h>
using namespace std;

// 1부터 n이하의 정수를 하나씩 순서대로 하나씩 주어진다. n은 입력 받는 것이고 100000까지 받을 수 있으며 랜덤하게 입력을 받는데
// 입력 받은 수열을 만드는데 push할때마다 1씩 증가한다. 예를 들어 4를 pop하기 위해서 1, 2, 3, 4 push 4번 후에 pop하는 것이다.
// 이렇게 예제처럼 8개의 수열을 지정하고 4, 3, 6 이런식으로 입력받은 대로 push pop하다가 수열의 입력이 만들지 못하면 수열이라면 NO 출력


int main()
{
	stack<int> S;
	int num;
	cin >> num;
	cin.ignore();
	// 1부터 N이하의 수를 순서대로 스택에 저장해야 되서 1부터 시작
	int asc = 1;
	string ans;

	while (num--)
	{
		
		int sq;
		cin >> sq;
		cin.ignore();

		// 입력받은 수를 스택에서 pop하기 위해서 수만큼 반복해서 스택에 푸쉬
		// asc 숫자는 어떤 수까지 스택에 넣었는지 알 수 있는 숫자
		while (asc <= sq)
		{
			S.push(asc++);
			ans += "+\n";
		}
		// 만약에 top에 있는 숫자가 입력 받은 수와 다르면 수열을 만들 수 없으므로 NO 출력
		// 더 낮은 높은 숫자는 push하면 되는데 더 낮은 숫자는 이미 스택 밑에 깔려서 중간에 있는 스택을 뺴올 수 없기 때문
		// 로직 순서가 psuh해놓고 pop할 수인지 체크하고 pop하기
		if (S.top() != sq)
		{
			cout << "NO" << "\n";
			return 0;
		}
		S.pop();
		ans += "-\n";

	}
	cout << ans;

}