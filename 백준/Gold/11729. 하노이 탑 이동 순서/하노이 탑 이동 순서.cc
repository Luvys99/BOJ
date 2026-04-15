#include <iostream>
using namespace std;

// 제일 큰거를 옮기기 위해서 n-1원판을 다른 막대로 옮겨야 함 
// 큰 원판을 옮길 때 출력
// n-1 원판을 제일 큰 거 위에 옮기면 끝
// 막대는 3개가 끝

void HanoiMove(int num, int from, int by, int to)
{

	// 옮길 원판이 한 개다! 그러면 옮겼다고 출력
	if (num == 1)
	{
		std::cout << from << " " << to << "\n";
	}
	else
	{
		// num -1 원판을 2번 막대로 옮기기
		HanoiMove(num - 1, from, to, by);
		// 가장 큰 원판 하나 3번 막대로 옮기기
		std::cout << from << " " << to << "\n";
		// num - 1 원판을 3번 막대로 옮기기
		HanoiMove(num - 1, by, from, to);
	}
}

int main()
{
	int num;
	std::cin >> num;

	int cnt = 1;

	for (int i = 0; i < num; i++)
	{
		cnt *= 2;
	}
	std::cout << cnt - 1 << "\n";

	HanoiMove(num, 1, 2, 3);

	return 0;
}