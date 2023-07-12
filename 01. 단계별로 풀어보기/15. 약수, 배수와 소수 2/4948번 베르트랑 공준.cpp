/*
* @title    : 4948번 베르트랑 공준(에라토스테네스 체)
* @content  : 약수, 배수와 소수 2
* @author   : 박동연
* @date     : 230710
* @time     : 960ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <memory.h>

using namespace std;

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

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool bArr[500000] = {};
	int n = 1;			// 입력 받는 수
	int iCount = 0;		// 소수의 개수
	int temp = 1;		//
	bool bCheck = false;

	while (0 != n)
	{
		memset(bArr, 1, sizeof(bArr));
		bArr[1] = true;

		bCheck = false;
		iCount = 0;
		cin >> n;
		if (1 == n)
			cout << "1" << "\n";

		for (int i = 2; i <= n; ++i)
		{
			if (IsPrime(i))
			{
				bCheck = true;
				bArr[i] = true;
			}
			else
			{
			}
			if (!bCheck)
				break;

			temp = 1;
			while ((temp * i) <= (2 * n))
			{
				bArr[(temp + 1) * i] = false;
				++temp;
			}
		}
		if (!bCheck)
			continue;
		for (int i = n + 1; i <= 2 * n; ++i)
		{
			if (bArr[i])
				++iCount;
		}
		cout << iCount << "\n";
	}

	return 0;
}