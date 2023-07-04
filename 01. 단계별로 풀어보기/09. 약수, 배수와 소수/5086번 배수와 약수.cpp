/*
* @title    : 5086번 배수와 약수
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230704
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iLeft = 1;
	int iRight = 1;

	while (0 != iLeft && 0 != iRight)
	{
		cin >> iLeft >> iRight;
		if (0 == iLeft && 0 == iRight)
			break;
		if (0 == iRight % iLeft)
		{
			cout << "factor" << "\n";
		}
		else if (0 == iLeft % iRight)
		{
			cout << "multiple" << "\n";
		}
		else
			cout << "neither" << "\n";
	}

	return 0;
}