/*
* @title    : 10988번 팰린드롬
* @content  : 심화1
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sStr;

	cin >> sStr;

	int iCount = 0;

	for (int i = 0; i < sStr.length() / 2; ++i)
	{
		if (sStr[i] == sStr[sStr.length() - 1 - i])
		{
			++iCount;
		}
	}

	if (sStr.length() / 2 == iCount)
		cout << 1;
	else
		cout << 0;

	return 0;
}