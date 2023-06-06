/*
* @title    : 11021번 A+B_7
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 0ms
* @memory   : 2020KB
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

	int iA(0), iB(0);
	int iCount = 0;
	
	cin >> iCount;

	for (int i = 0; i < iCount; ++i)
	{
		cin >> iA >> iB;
		v.push_back(iA + iB);
	}

	vector<int>::iterator iter = v.begin();

	for (int j = 0; j < iCount; ++j, ++iter)
	{
		cout << "Case #" << (j + 1) << ": " << *iter << "\n";
	}

	return 0;
}