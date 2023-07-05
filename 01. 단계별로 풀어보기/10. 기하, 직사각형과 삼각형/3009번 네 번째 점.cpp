/*
* @title    : 3009번 네 번째 점
* @content  : 기하 : 직사각형과 삼각형
* @author   : 박동연
* @date     : 230705
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;

	int temp = 0;

	int xCount = 0;
	int yCount = 0;

	int arrX[3] = {};
	int arrY[3] = {};


	for (int i = 0; i < 3; ++i)
	{
		cin >> arrX[i] >> arrY[i];
	}

	temp = arrX[0];
	for (int j = 0; j < 3; ++j)
	{
		if (temp != arrX[j])
		{
			x1 = arrX[0];
			x2 = arrX[j];
			break;
		}
			
	}

	temp = arrY[0];
	for (int j = 0; j < 3; ++j)
	{
		if (temp != arrY[j])
		{
			y1 = arrY[0];
			y2 = arrY[j];
			break;
		}

	}

	if (arrX[0] == arrX[1])
		cout << arrX[2] << " ";
	else if (arrX[0] == arrX[2])
		cout << arrX[1] << " ";
	else
		cout << arrX[0] << " ";

	if (arrY[0] == arrY[1])
		cout << arrY[2];
	else if (arrY[0] == arrY[2])
		cout << arrY[1];
	else
		cout << arrY[0];

	return 0;
}