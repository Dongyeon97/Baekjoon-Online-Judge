/*
* @title    : 2566번 최댓값
* @content  : 2차원 배열
* @author   : 박동연
* @date     : 230606
* @time     : 4ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iArr[9][9] = {};

	int iMaxPos_x = 0;
	int iMaxPos_y = 0;

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cin >> iArr[i][j];
		}
	}

	int iMax = iArr[0][0];

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (i == 0 && j == 0)
				continue;
			else
			{
				if (iMax < iArr[i][j])
				{
					iMax = iArr[i][j];
					iMaxPos_x = i;
					iMaxPos_y = j;
				}
			}
		}
	}

	cout << iMax << "\n" << iMaxPos_x + 1 << " " << iMaxPos_y + 1;

	return 0;
}