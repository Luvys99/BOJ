#include <iostream>


int main()
{
	long long a, b, c;
	std::cin >> a >> b >> c;

	// 나머지 연산을 해라, 분할 정복이 필요한 문제면 모듈러 연산을 해라
	// 21억의 21억 제곱을 연산하려면 엄청나게 메모리에 부담이 갈 것 그래서 분배 
	long long ret = 1;
	a %= c;

	while (b > 0)
	{
		// b가 홀수면 출력할 정답에 a 한번을 추가로 곱해줌
		if (b % 2 == 1)
		{
			ret = (ret * a) % c;
		}
		// 짝으면 a 제곱에 %c 해줌
		a = (a * a % c);

		//루프마다 절반씩 분할해서 계산
		b /= 2;

	}

	std::cout << ret;

	return 0;
}