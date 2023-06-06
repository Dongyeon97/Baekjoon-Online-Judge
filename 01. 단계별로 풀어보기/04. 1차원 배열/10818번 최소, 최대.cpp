/*
* @title    : 10818번 최소, 최대
* @content  : 1차원 배열
* @author   : 박동연
* @date     : 230601
* @time     : 468ms
* @memory   : 8176KB
* @state    : 완료
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int iCount = 0;
	int iDst;
	vector<int> vec;

	cin >> iCount;

	for (int i = 0; i < iCount; ++i)
	{
		cin >> iDst;
		vec.push_back(iDst);
	}

	vector<int>::iterator vecIter = vec.begin();
	
	int iMax = 0;
	int iMin = 0;

	iMax = *max_element(vec.begin(), vec.end());
	iMin = *min_element(vec.begin(), vec.end());

	cout << iMin << " " << iMax;
	return 0;
}