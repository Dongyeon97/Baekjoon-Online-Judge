/*
* @title    : 17103번 골드바흐 파티션
* @content  : 약수, 배수와 소수 2
* @author   : 박동연
* @date     : 230710
* @time     : ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

	int T = 0;
	int N = 0;
	int iCount = 0;

	int iArr[1000001] = { 0, };

	// 에라토스테네스의 체
	for (int i = 2; i <= 1000000; ++i)
	{
		iArr[i] = i;
	}
	for (int i = 2; i * i <= 1000000; ++i)
	{
		if (0 == iArr[i])
			continue;
		for (int j = i * i; j < 1000000; j += i)
		{
			iArr[j] = 0;
		}
	}

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		iCount = 0;
		cin >> N;
		for (int j = 2; j < N; ++j)
		{
			if (iArr[j] + iArr[N - j] == N)
				++iCount;
		}

		if (iArr[N/2] * 2 == N)
			++iCount;
		iCount /= 2;
		cout << iCount << "\n";
	}

	return 0;
}