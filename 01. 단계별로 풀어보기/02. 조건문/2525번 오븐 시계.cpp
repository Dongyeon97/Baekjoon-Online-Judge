/*
* @title    : 2525번 오븐 시계
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
	int iH(0), iM(0);
	int iCookTime(0);
	int iEndH(0), iEndM(0);

	cin >> iH >> iM;
	cin >> iCookTime;

	if (60 <= iM + iCookTime)
	{
		iEndH = iH + (iM + iCookTime) / 60;
		iEndM = (iM + iCookTime) % 60;

		if (23 < iEndH)
			iEndH -= 24;
	}
	else
	{
		iEndH = iH;
		iEndM = iM + iCookTime;
	}

	cout << iEndH << " " << iEndM;

	return 0;
}