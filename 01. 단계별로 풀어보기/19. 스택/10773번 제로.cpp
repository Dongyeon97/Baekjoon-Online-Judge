/*
* @title    : 10773번 제로
* @content  : 스택
* @author   : 박동연
* @date     : 230710
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int K = 0;
	int N = 0;
	vector<int> vec;

	cin >> K;

	for (int i = 0; i < K; ++i)
	{
		cin >> N;
		if (0 == N)
		{
			vec.pop_back();
		}
		else
		{
			vec.push_back(N);
		}
	}
	
	int sum = 0;

	for (int i : vec)
	{
		sum += i;
	}

	cout << sum;

	return 0;
}