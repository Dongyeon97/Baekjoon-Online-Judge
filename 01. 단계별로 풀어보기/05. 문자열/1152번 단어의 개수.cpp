/*
* @title    : 1152번 단어의 개수
* @content  : 문자열
* @author   : 박동연
* @date     : 230605
* @time     : 36ms
* @memory   : 4916KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sStr;
	int iCount = 1;
	getline(cin, sStr);

	if (1 == sStr.length() && ' ' == sStr[0])
	{
		cout << 0;
		return 0;
	}

	for (int i = 0; i < sStr.length(); ++i)
	{
		if (' ' == sStr[i])
		{
			++iCount;
		}
	}

	if (' ' == sStr[0])
		--iCount;

	if (' ' == sStr[sStr.length() - 1])
		--iCount;

	cout << iCount;
	return 0;
}