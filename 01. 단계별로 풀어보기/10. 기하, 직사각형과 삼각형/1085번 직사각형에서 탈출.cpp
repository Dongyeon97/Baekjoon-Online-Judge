/*
* @title    : 1085번 직사각형에서 탈출
* @content  : 기하 : 직사각형과 삼각형
* @author   : 박동연
* @date     : 230705
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;

	int w = 0;
	int h = 0;

	int iArr[4] = {};

	cin >> x >> y >> w >> h;

	iArr[0] = x;
	iArr[1] = y;
	iArr[2] = w - x;
	iArr[3] = h - y;

	int min = iArr[0];

	for (int i = 0; i < 4; ++i)
	{
		if (iArr[i] < min)
			min = iArr[i];
	}

	cout << min;

	return 0;
}