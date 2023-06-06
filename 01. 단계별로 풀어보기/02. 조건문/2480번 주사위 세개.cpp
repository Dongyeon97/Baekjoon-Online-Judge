/*
* @title    : 2480번 주사위 세개
* @content  : 조건문
* @author   : 박동연
* @date     : 230528
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;

	int iFirst(0), iSecond(0), iThird(0);

	cin >> iFirst >> iSecond >> iThird;

	v.push_back(iFirst);
	v.push_back(iSecond);
	v.push_back(iThird);

	// 모두 같을 때
	if (iFirst == iSecond && iFirst == iThird)
	{
		cout << 10000 + (iFirst * 1000) << endl;
	}
	else if(iFirst == iSecond && iFirst != iThird)
	{
		cout << 1000 + (iFirst * 100) << endl;
	}
	else if (iFirst == iThird && iFirst != iSecond)
	{
		cout << 1000 + (iFirst * 100) << endl;
	}
	else if (iSecond == iThird && iFirst != iThird)
	{
		cout << 1000 + (iSecond * 100) << endl;
	}
	else
	{
		int iMax = *max_element(v.begin(), v.end());
		cout << iMax * 100 << endl;
	}

	return 0;
}