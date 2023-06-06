/*
* @title    : 1330번 두 수 비교하기
* @content  : 조건문
* @author   : 박동연
* @date     : 230528
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iA(0), iB(0);

	cin >> iA >> iB;

	if (iA > iB)
		cout << ">";
	else if (iA < iB)
		cout << "<";
	else
		cout << "==";

	return 0;
}