#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[20] = { 20, 19, 18, 17, 16, 15,14, 13,12,11,10,9,8,7,6,5,4,3,2,1 };
	int start, end;

	for (int i = 0; i < 10; i++)
	{
		cin >> start >> end;
		swap(start, end);
		start = 20 - start;
		end = 20 - end;
		//end위치는 정렬에 포함이 안되기 때문에 +1
		//배열을 뒤집는 C++98버전부터 호환되는 함수
		//algorithm 헤더에 존재하는 함수
		reverse(arr + start, arr + end + 1);
	}

	for (int i = 19; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
}