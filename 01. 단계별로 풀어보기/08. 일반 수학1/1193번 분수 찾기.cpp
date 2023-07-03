/*
* @title    : 1193번 분수찾기
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230629
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iX = 0;
	int iLineNum = 1;

	int iParent = 1;
	int iChild = 1;

	int iCount = 0;

	cin >> iX;

	for (int i = 1; iX >= iLineNum; ++i)
	{
		// iX가 1일 때
		if (1 == iX)
		{
			cout << iChild << "/" << iParent << endl;
			return 0;
		}
		// i가 짝수 일 때
		else if (0 == i % 2)
		{
			iParent = i;
			iChild = 1;
			for (int j = 0; j < iX - iLineNum; ++j)
			{
				--iParent;
				++iChild;
			}
		}
		// i가 홀수 일 때
		else
		{
			iParent = 1;
			iChild = i;
			for (int j = 0; j < iX - iLineNum; ++j)
			{
				++iParent;
				--iChild;
			}
		}
		iLineNum += i;
	}

	cout << iChild << "/" << iParent;

	return 0;
}