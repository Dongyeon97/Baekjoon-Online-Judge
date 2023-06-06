/*
* @title    : 2588번 곱셈
* @content  : 입출력과 사칙연산
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

	cout << iA * (iB % 10) << endl;
	cout << iA * ((iB % 100) / 10) << endl;
	cout << iA * (iB / 100) << endl;
	cout << iA * iB << endl;

	return 0;
}