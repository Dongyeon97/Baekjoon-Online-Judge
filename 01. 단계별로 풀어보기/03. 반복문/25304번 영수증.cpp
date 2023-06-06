/*
* @title    : 25304번 영수증
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iTotalMoney(0);
	int iTotalNum(0);

	int iMyResult(0);

	cin >> iTotalMoney;
	cin	>> iTotalNum;

	for (int i = 0; i < iTotalNum; ++i)
	{
		int iCheckMoney(0);
		int iCheckNum(0);

		cin >> iCheckMoney >> iCheckNum;
		iMyResult += iCheckMoney * iCheckNum;
	}

	if (iTotalMoney == iMyResult)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}