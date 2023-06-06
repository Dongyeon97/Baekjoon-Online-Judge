/*
* @title    : 8393번 합
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

#include <iostream>

using namespace std;

int main()
{
	int iDst = 0, iResult = 0;

	cin >> iDst;

	for (int i = 1; i <= iDst; ++i)
	{
		iResult += i;
	}
	cout << iResult;

	return 0;
}