/*
* @title    : 3003번 킹, 퀸, 룩, 비숍, 나이트, 폰
* @content  : 심화1
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iMaxArr[6] = {1, 1, 2, 2, 2, 8};
	int iArr[6] = {};

	for (int i = 0; i < sizeof(iArr) / sizeof(int); ++i)
	{
		cin >> iArr[i];
	}

	for (int i = 0; i < sizeof(iArr) / sizeof(int); ++i)
	{
		cout << iMaxArr[i] - iArr[i] << " ";
	}

	return 0;
}