/*
* @title    : 15552번 빠른 A+B
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 228ms
* @memory   : 8292KB
* @state    : 완료
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

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
		cout << *iter << "\n";
	}
	return 0;
}