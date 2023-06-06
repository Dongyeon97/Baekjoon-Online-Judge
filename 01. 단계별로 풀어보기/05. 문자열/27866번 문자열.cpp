/*
* @title    : 27866번 문자와 문자열
* @content  : 문자열
* @author   : 박동연
* @date     : 230602
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	string szName;
	int iInput = 0;

	cin >> szName;
	cin >> iInput;

	cout << szName[iInput - 1];

	return 0;
}