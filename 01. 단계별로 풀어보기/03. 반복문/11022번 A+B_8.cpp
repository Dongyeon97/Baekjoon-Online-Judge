/*
* @title    : 11022번 A+B_8
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int iCount(0), iA(0), iB(0);

	cin >> iCount;

	for (int i = 0; i < iCount; ++i)
	{
		cin >> iA >> iB;
		cout << "Case #" << (i + 1) << ": " << iA << " + " << iB << " = " << iA + iB << "\n";
	}

	return 0;
}