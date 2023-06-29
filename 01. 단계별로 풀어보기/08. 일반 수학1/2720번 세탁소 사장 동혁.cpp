/*
* @title    : 2720번 세탁소 사장 동혁
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230629
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iT = 0;	// 테스트 케이스 개수
	int iC = 0;	// 손님이 주는 돈(센트)
	int iLeft = 0;

	int iQuarter = 0, iDime = 0, iNickel = 0, iPenny = 0;

	cin >> iT;

	for (int i = 0; i < iT; ++i)
	{
		cin >> iC;
		iLeft = iC;

		iQuarter = iLeft / 25;
		iLeft -= iQuarter * 25;

		iDime = iLeft / 10;
		iLeft -= iDime * 10;

		iNickel = iLeft / 5;
		iLeft -= iNickel * 5;

		iPenny = iLeft;
		iLeft -= iPenny;

		cout << iQuarter << " " << iDime << " " << iNickel << " " << iPenny << endl;
	}

	return 0;
}