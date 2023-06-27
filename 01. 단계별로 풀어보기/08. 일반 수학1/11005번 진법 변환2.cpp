/*
* @title    : 11005번 진법 변환2
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230627
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int GetLength(char* _pStr)
{
	int iNum = 0;
	while (_pStr[iNum])
		++iNum;

	return iNum;
}

int main()
{
	int				B;			// B진법
	int				N;			// 입력되는 숫자
	int				iTemp = 0;
	vector<int>		vecResult;	// 최종 출력 값

	cin >> N >> B;
	iTemp = N;

	vector<int>::iterator vecIter = vecResult.begin();

	while (0 < iTemp)
	{
		vecResult.push_back(iTemp % B);
		iTemp /= B;
	}



	for (int i = vecResult.size() - 1; 0 <= i ; --i)
	{
		if (10 <= vecResult[i])
			cout << char(vecResult[i] + 55);
		else
		{
			cout << (vecResult[i]);
		}
	}
}