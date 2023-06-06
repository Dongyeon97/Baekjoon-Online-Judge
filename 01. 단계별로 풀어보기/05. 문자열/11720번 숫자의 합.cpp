/*
* @title    : 11720번 숫자의 합
* @content  : 문자열
* @author   : 박동연
* @date     : 230602
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int  iCount = 0;
	int  iTotal = 0;

	cin >> iCount;
	cin >> str;
	for (int i = 0; i < iCount; ++i)
	{
		if('\0' != str[i])
			iTotal += str[i] - '0';
	}
	cout << iTotal;

	return 0;
}