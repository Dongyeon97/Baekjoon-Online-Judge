/*
* @title    : 2562번 최댓값
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
	int iTemp = 0;
	vector<int> vec;
	vector<int>::iterator iter = vec.begin();

	for (int i = 0; i < 9; ++i)
	{
		cin >> iTemp;
		vec.push_back(iTemp);
	}

	int iMax = *max_element(vec.begin(), vec.end());
	int iIndex = max_element(vec.begin(), vec.end()) - vec.begin();
		
	cout << iMax << "\n";
	cout << iIndex + 1;

	return 0;
}