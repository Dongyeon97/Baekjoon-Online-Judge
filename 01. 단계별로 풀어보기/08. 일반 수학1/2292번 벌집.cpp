/*
* @title    : 2292번 벌집
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230629
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int iN = 0;
	int iNum = 1;
	int iResult = 1;

	cin >> iN;

	// 한 바퀴 당 최대 수용할 수 있는 방들 = 1 + i x 바퀴수

	while (iResult < iN)
	{
		iResult += 6 * iNum++;
	}

	cout << iNum;

	return 0;
}