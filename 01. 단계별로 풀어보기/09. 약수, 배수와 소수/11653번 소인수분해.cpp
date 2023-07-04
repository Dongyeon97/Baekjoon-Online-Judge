/*
* @title    : 11653번 소인수분해
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230704
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int N = 0;

	cin >> N;

	if (1 == N)
		return 0;

	for (int i = 2; i <= N; ++i)
	{
		while(0 == N % i)
		{
			cout << i << "\n";
			N /= i;
		}
	}

	return 0;
}