/*
* @title    : 2908번 상수
* @content  : 문자열
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2024KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sStr1;
	string sStr2;

	int iTemp = 0;

	cin >> sStr1 >> sStr2;

	iTemp = sStr1[0];
	sStr1[0] = sStr1[2];
	sStr1[2] = iTemp;

	iTemp = sStr2[0];
	sStr2[0] = sStr2[2];
	sStr2[2] = iTemp;

	if (sStr1.compare(sStr2) > 0)
	{
		cout << sStr1;
	}
	else
	{
		cout << sStr2;
	}

	return 0;
}