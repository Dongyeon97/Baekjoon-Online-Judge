/*
* @title    : 9086번 문자열
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

	int iT = 0;
	cin >> iT;

	for (int i = 0; i < iT; ++i)
	{
		cin >> str;
		cout << *str.begin() << *(str.end() - 1) << "\n";
	}

	return 0;
}