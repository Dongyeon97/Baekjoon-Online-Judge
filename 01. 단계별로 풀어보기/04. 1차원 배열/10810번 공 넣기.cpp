/*
* @title    : 10810번 공 넣기
* @content  : 1차원 배열
* @author   : 박동연
* @date     : 230601
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int iBucketCount = 0;	// N
	int iInputCount = 0;	// M

	vector<int> vec;

	cin >> iBucketCount >> iInputCount;

	vec.resize(iBucketCount);

	for (int l = 0; l < iInputCount; ++l)
	{
		int i = 0;
		int j = 0;
		int k = 0;
		cin >> i >> j >> k;
		for (i; i <= j; i++)
		{
			vec[i - 1] = k;
		}
	}

	vector<int>::iterator iter = vec.begin();

	for (iter; iter != vec.end(); ++iter)
	{
		if (iter == vec.end())
			cout << 0 << " ";
		cout << *iter << " ";
	}

	return 0;
}