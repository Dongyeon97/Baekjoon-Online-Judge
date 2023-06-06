/*
* @title    : 10950번 A+B_3
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 4ms
* @memory   : 2020KB
* @state    : 완료
*/

// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.

// 각 테스트 케이스는 한 줄로 이루어져 있으며,
// 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	int iT(0), iA(0), iB(0);

	cin >> iT;

	for (int i = 0; i < iT; ++i)
	{
		cin >> iA >> iB;
		v.push_back(iA + iB);
	}

	vector<int>::iterator iter = v.begin();

	for (int j = 0; j < iT; ++j, ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}