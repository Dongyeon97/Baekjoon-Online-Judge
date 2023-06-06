/*
* @title    : 10807번 개수 세기
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
	int iCount = 0;
	int iFind  = 0;
	int iResult = 0;
	cin >> iCount;

	int iArr[100] = {};

	for (int i = 0; i < iCount; ++i)
	{
		cin >> iArr[i];
	}

	cin >> iFind;

	for (int j = 0; j < iCount; ++j)
	{
		if (iFind == iArr[j])
			++iResult;
	}

	cout << iResult;

	return 0;
}