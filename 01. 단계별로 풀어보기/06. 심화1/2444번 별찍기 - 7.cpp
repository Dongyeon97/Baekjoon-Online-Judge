/*
* @title    : 2444번 별찍기 - 7
* @content  : 심화1
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iN = 0;

	cin >> iN;

	for (int i = 1; i < iN; ++i)
	{
		for (int j = 0; j < iN - i; ++j)
		{
			cout << " ";
		}
		for (int k = 0; k < (2 * i) - 1; ++k)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = iN; i > 0; --i)
	{
		for (int j = 0; j < iN - i; ++j)
		{
			cout << " ";
		}
		for (int k = 0; k < (2 * i) - 1; ++k)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}