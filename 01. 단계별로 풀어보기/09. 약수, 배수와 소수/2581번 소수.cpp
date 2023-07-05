/*
* @title    : 2581번 소수
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230704
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>

using namespace std;

// 자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 
// 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.

int main()
{
	int M = 0;	// M이 더 작은 수
	int N = 0;

	int iCount = 0;
	int sum = 0;

	vector<int> vec;

	cin >> M;
	cin >> N;

	for (int i = M; i <= N; ++i)
	{
		iCount = 0;
		for (int j = i; j > 0; --j)
		{
			if (0 == i % j)
				++iCount;
		}
		if (2 == iCount)
			vec.push_back(i);
	}

	vector<int>::iterator iter = vec.begin();
	if (0 == vec.size())
	{
		cout << -1;
		return 0;
	}

	for (iter; iter != vec.end(); ++iter)
	{
		sum += *iter;
	}

	cout << sum << "\n";
	iter = vec.begin();
	cout << *iter;

	return 0;
}