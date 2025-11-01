#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int roomnum;
	int arr[10];
	int max_set = 0;
	memset(arr, 0, sizeof(arr));
	cin >> roomnum;
	//필요한 숫자 추출
	while (roomnum > 0)
	{
		arr[roomnum % 10]++;
		roomnum /= 10;
	}
	//6,9를 제외한 필요한 번호(세트) 개수 저장
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9) continue;
		max_set = max(max_set, arr[i]);
	}
	//6,9번 번호 셋트 개수 저장
	max_set = max(max_set, (arr[6] + arr[9]+1) / 2);
	cout << max_set;
}