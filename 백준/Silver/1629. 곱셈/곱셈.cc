#include <iostream>

long long pow(long long a, long long b, long long c)
{
	// 재귀 탈출 조건 ( 분할 해서 b 가 1이 되었을 때 a 값을 c로 나머지 연산 ( a 값이 표현할 수 있는 값을 넘는 것을 방지하기 위해서 먼저 %c 해줌, 분배법칙에 의해 가능 )
	// 자연수에 0은 포함되지 않기 때문에 0인 경우 제거
	if (b == 1) return a % c;
	
	// 짝수, 홀수의 경우 두 번씩 분할해서 재귀함수를 호출하면 호출횟수가 엄청나게 늘어나기 때문에
	// 값을 저장해서 연산함으로 호출 횟수를 루프마다 2번씩에서 1번으로 줄임
	long long ret_val = pow(a, b / 2, c);
	ret_val = ret_val * ret_val % c;

	// 거듭제곱 횟수가 짝수면 딱 절반 나눠서 함수 호출
	if (b % 2 == 0)
	{
		return ret_val;
	}
	else
	{
		return ret_val * a % c;
	}


}

int main()
{
	long long a, b, c;
	std::cin >> a >> b >> c;

	std::cout << pow(a, b, c);

}