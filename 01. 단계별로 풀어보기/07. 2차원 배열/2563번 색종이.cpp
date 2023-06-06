/*
* @title    : 2563번 색종이
* @content  : 2차원 배열
* @author   : 박동연
* @date     : 230606
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int iArr[100][100] = {0, };

	int iN = 0;

	int iX = 0, iY = 0;

	int iNoneCount = 0;

	cin >> iN;

	for (int i = 0; i < iN; ++i)
	{
		cin >> iX >> iY;

		for (int j = iX; j < iX + 10; ++j)
		{
			for (int k = iY; k < iY + 10; ++k)
			{
				++iArr[j][k];
			}
		}
	}

	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			if (0 != iArr[i][j])
			{
				++iNoneCount;
			}
		}
	}
	cout << iNoneCount;

	return 0;
}