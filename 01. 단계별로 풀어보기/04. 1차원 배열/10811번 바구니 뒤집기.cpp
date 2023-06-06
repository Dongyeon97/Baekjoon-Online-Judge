/*
* @title    : 10811번 바구니 뒤집기
* @content  : 1차원 배열
* @author   : 박동연
* @date     : 230602
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

int main()
{
	int iBucketCount = 0;	// N
	int iRevCount = 0;	    // M

	int iI = 0;
	int iJ = 0;
	
	cin >> iBucketCount >> iRevCount;

	int iArr[100];

	for (int i = 1; i <= iBucketCount; ++i)
	{
		iArr[i] = i;
	}

	for (int i = 0; i < iRevCount; ++i)
	{
		cin >> iI >> iJ;
		for (int i = 0; i <= (iJ - iI) / 2; ++i)
		{
			swap(iArr[iI + i], iArr[iJ - i]);
		}
	}

	for (int i = 1; i <= iBucketCount; ++i)
	{
		cout << iArr[i];
	}

	return 0;
}