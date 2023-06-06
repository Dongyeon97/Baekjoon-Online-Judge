/*
* @title    : 5622번 다이얼
* @content  : 문자열
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2024KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sDial;
	int	   iArr[15] = {};
	int	   iResult = 0;

	for (int i = 0; i < 15; ++i)
	{
		iArr[i] = -1;
	}

	cin >> sDial;

	for (int i = 0; i < sDial.length(); ++i)
	{
		if (3 > sDial[i] - 'A' && 0 <= sDial[i] - 'A')
		{
			iArr[i] = 2;
		}
		else if (6 > sDial[i] - 'A' && 3 <= sDial[i] - 'A')
		{
			iArr[i] = 3;
		}
		else if (9 > sDial[i] - 'A' && 6 <= sDial[i] - 'A')
		{
			iArr[i] = 4;
		}
		else if (12 > sDial[i] - 'A' && 9 <= sDial[i] - 'A')
		{
			iArr[i] = 5;
		}
		else if (15 > sDial[i] - 'A' && 12 <= sDial[i] - 'A')
		{
			iArr[i] = 6;
		}
		else if (19 > sDial[i] - 'A' && 15 <= sDial[i] - 'A')
		{
			iArr[i] = 7;
		}
		else if (22 > sDial[i] - 'A' && 19 <= sDial[i] - 'A')
		{
			iArr[i] = 8;
		}
		else if (26 > sDial[i] - 'A' && 22 <= sDial[i] - 'A')
		{
			iArr[i] = 9;
		}
	}

	for (int i = 0; i < sizeof(iArr) / sizeof(int); ++i)
	{
		iResult += iArr[i] + 1;
	}

	cout << iResult;

	return 0;
}