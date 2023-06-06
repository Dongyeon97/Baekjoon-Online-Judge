/*
* @title    : 1546번 평균
* @content  : 1차원 배열
* @author   : 박동연
* @date     : 230602
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int iN = 0;
	float iTemp = 0;
	float iTotal = 0;
	vector<float> vec;

	cin >> iN;

	for (int i = 0; i < iN; ++i)
	{
		cin >> iTemp;
		vec.push_back(iTemp);
	}

	float iMax = *max_element(vec.begin(), vec.end());

	vector<float>::iterator iter = vec.begin();

	for (iter; iter != vec.end(); ++iter)
	{
		*iter = (*iter / iMax) * 100;
		iTotal += *iter;
	}

	cout << iTotal / iN;

	return 0;
}
