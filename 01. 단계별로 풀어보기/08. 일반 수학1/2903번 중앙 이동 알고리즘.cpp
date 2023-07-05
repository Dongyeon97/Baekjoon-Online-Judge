/*
* @title    : 2903번 중앙 이동 알고리즘
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
	int iN		= 0;	// 반복 회수
	int iResult = 2;

	cin >> iN;

	for (int i = 0; i < iN; ++i)
	{
		iResult += iResult - 1;
	}

	cout << (int)pow(iResult, 2);

	return 0;
}