/*
* @title    : 1929번 소수 구하기
* @content  : 약수, 배수와 소수 2
* @author   : 박동연
* @date     : 230707
* @time     : 4400ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <algorithm>
#include <cmath>

bool IsPrime(int _iData)
{
	// 0 예외처리 안해서 한참 해맴
	if (0 == _iData)
		return false;
	if (1 == _iData)
		return false;

	for (int i = 2; i <= (int)sqrt(_iData); ++i)
	{
		if (0 == _iData % i)
		{
			return false;
		}
	}
	return true;
}

using namespace std;

int main()
{
	int M = 0;
	int N = 0;

	cin >> M >> N;

	for (int i = M; i <= N; ++i)
	{
		if (IsPrime(i))
			cout << i << "\n";
	}

	return 0;
}