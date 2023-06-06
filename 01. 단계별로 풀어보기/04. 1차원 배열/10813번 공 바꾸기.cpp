/*
* @title    : 10813번 공 바꾸기
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
	int iSwapCount = 0;	    // M
	int iTemp = 0;

	vector<int> vec;

	cin >> iBucketCount >> iSwapCount;

	vec.resize(iBucketCount);

	for (int i = 0; i < iBucketCount; ++i)
	{
		vec[i] = i + 1;
	}

	for (int l = 0; l < iSwapCount; ++l)
	{
		int i = 0;
		int j = 0;
		
		cin >> i >> j;

		iTemp = vec[i - 1];
		vec[i - 1] = vec[j - 1];
		vec[j - 1] = iTemp;
	}

	for (int i = 0; i < iBucketCount; ++i)
	{
		cout << vec[i] << " ";
	}

	return 0;
}