#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num[9];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];
		sum += num[i];
	}

	//배열 오름차순 정렬
	sort(num, num + 9);
	// 배열의 총합에서 2개의 숫자를 뺏을 때 100인 모든 경우의 수 검색해서 처음 나온 경우로 출력
	//중복 때문에 i, j = i+1로 두 숫자가 되는 경우를 구했고 배열의 갯수는 9개에 2개를 고르고 중복제외니까 36
	//0부터 8, 1~9
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - (num[i] + num[j]) == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
						cout << num[k] << "\n";
				}
				return 0;
			}
		}
	}

	return 0;
}