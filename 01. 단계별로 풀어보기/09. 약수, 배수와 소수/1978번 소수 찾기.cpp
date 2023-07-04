/*
* @title    : 1978번 소수 찾기
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
	int N = 0;	// 주어지는 숫자의 개수
	int iTemp = 0;
	int iCount = 0;
	int iTotalCount = 0;
	vector<int> vec;

	cin >> N;

	while (N--)
	{
		cin >> iTemp;
		vec.push_back(iTemp);
	}

	vector<int>::iterator iter = vec.begin();

	for (iter; iter != vec.end(); ++iter)
	{
		iCount = 0;
		for (int i = (*iter); i > 0; --i)
		{
			if (0 == (*iter) % i)
				++iCount;
		}
		if (2 == iCount)
			++iTotalCount;
	}

	cout << iTotalCount;

	return 0;
}