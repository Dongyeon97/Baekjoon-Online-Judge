/*
* @title    : 9063번 대지
* @content  : 기하 : 직사각형과 삼각형
* @author   : 박동연
* @date     : 230705
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
	int xTemp = 0;
	int yTemp = 0;

	int N = 0;
	cin >> N;

	vector<int> vecX;
	vector<int> vecY;

	vector<int>::iterator iterX;
	vector<int>::iterator iterY;

	vector<int>::iterator iterX2;
	vector<int>::iterator iterY2;

	for (int i = 0; i < N; ++i)
	{
		cin >> xTemp >> yTemp;
		vecX.push_back(xTemp);
		vecY.push_back(yTemp);
	}

	iterX = max_element(vecX.begin(), vecX.end());
	iterY = max_element(vecY.begin(), vecY.end());

	iterX2 = min_element(vecX.begin(), vecX.end());
	iterY2 = min_element(vecY.begin(), vecY.end());

	cout << (*iterX - *iterX2) * (*iterY - *iterY2);

	return 0;
}