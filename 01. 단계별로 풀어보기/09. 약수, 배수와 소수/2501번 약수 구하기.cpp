/*
* @title    : 2501번 약수 구하기
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

int main()
{
	int N = 0;
	int K = 0;
	
	vector<int> vec;

	cin >> N >> K;

	for (int i = N; i > 0; --i)
	{
		if (0 == N % i)
			vec.push_back(i);
	}

	if (vec.size() < K)
		cout << 0;
	else
		cout << vec[vec.size() - K];

	return 0;
}