#include <iostream>
using namespace std;

int main()
{
	int Tcount;
	int num1, num2;

	cin >> Tcount;

	for (int i = 1; i <= Tcount; i++)
	{
		cin >> num1 >> num2;
		cout << "Case #" << i << ": " << num1 + num2 << "\n";
	}

}	