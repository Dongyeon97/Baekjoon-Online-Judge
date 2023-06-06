/*
* @title    : 14681번 사분면 고르기
* @content  : 조건문
* @author   : 박동연
* @date     : 230528
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// 좌표가(12, 5)인 점 A는 x좌표와 y좌표가 모두 양수이므로 제1사분면에 속한다.점 B는 x좌표가 음수이고 y좌표가 양수이므로 제2사분면에 속한다.

// 점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램을 작성하시오.단, x좌표와 y좌표는 모두 양수나 음수라고 가정한다.

#include <iostream>

using namespace std;

int main()
{
	int iX(0), iY(0);

	cin >> iX;
	cin >> iY;

	if (0 < iX && 0 < iY)
	{
		cout << '1';
	}
	else if (0 > iX && 0 < iY)
	{
		cout << '2';
	}
	else if (0 > iX && 0 > iY)
	{
		cout << '3';
	}
	else
	{
		cout << '4';
	}

	return 0;
}