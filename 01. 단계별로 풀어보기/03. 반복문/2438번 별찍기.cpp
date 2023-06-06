/*
* @title    : 2438번 별찍기
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

#include <iostream>

using namespace std;

int main()
{
	int iCount = 0;

	cin >> iCount;

	for (int i = 0; i < iCount; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << '*';
		}
		cout << "\n";
	}

	return 0;
}