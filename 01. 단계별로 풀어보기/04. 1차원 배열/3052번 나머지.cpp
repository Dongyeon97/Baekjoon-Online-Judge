/*
* @title    : 3052번 나머지
* @content  : 1차원 배열
* @author   : 박동연
* @date     : 230601
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iTemp = 0;
	int iCount = 0;
	bool bArr[42] = {};

	for (int i = 0; i < 10; ++i)
	{
		cin >> iTemp;
		bArr[iTemp % 42] = true;
	}

	for (int i = 0; i < 42; ++i)
	{
		if (bArr[i] > 0)
			++iCount;
	}

	cout << iCount;

	return 0;
}