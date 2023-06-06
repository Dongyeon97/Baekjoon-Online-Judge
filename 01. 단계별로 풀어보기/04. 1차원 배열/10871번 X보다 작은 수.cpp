/*
* @title    : 10871번 X보다 작은 수
* @content  : 1차원 배열
* @author   : 박동연
* @date     : 230601
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int iCount = 0;	// 개수
	int iX = 0;		// 기준 값
	int iDst = 0;

	vector<int> vec;

	cin >> iCount >> iX;

	for (int i = 0; i < iCount; ++i)
	{
		cin >> iDst;
		vec.push_back(iDst);
	}
	vector<int>::iterator iter = vec.begin();

	for (iter; iter != vec.end(); ++iter)
	{
		if (*iter < iX)
			cout << *iter << " ";
	}

	return 0;
}