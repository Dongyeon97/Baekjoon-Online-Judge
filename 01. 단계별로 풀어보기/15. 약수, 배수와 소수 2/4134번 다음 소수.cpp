/*
* @title    : 4134번 다음 소수
* @content  : 약수, 배수와 소수 2
* @author   : 박동연
* @date     : 230707
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <algorithm>
#include <cmath>


bool IsPrime(long long _iData)
{
	// 0 예외처리 안해서 한참 해맴
	if (0 == _iData)
		 return false;
	if (1 == _iData)
		 return false;
	
	for (long long i = 2; i <= (long int)sqrt(_iData); ++i)
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
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	long int n = 0;
	long int temp = 0;

	cin >> n;

	for (long int i = 0; i < n; ++i)
	{
		cin >> temp;
		while (!IsPrime(temp))
		{
			++temp;
		}
		cout << temp << endl;
	}

	return 0;
}