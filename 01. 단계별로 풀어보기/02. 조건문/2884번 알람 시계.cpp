/*
* @title    : 2884번 알람 시계
* @content  : 조건문
* @author   : 박동연
* @date     : 230528
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// 첫째 줄에 두 정수 H와 M이 주어진다.
// (0 ≤ H ≤ 23, 0 ≤ M ≤ 59) 그리고 이것은 현재 상근이가 설정한 놓은 알람 시간 H시 M분을 의미한다.
// 입력 시간은 24시간 표현을 사용한다. 24시간 표현에서 하루의 시작은 0:0(자정)이고, 
// 끝은 23 : 59(다음날 자정 1분 전)이다.시간을 나타낼 때, 불필요한 0은 사용하지 않는다.


#include <iostream>

using namespace std;

int main()
{
	int iH(0), iM(0), iChangedH(0), iChangedM(0);

	cin >> iH >> iM;

	iChangedM = iM - 45;
	if (iChangedM < 0)
	{
		iChangedM += 60;
		iChangedH = iH - 1;
		if (iChangedH < 0)
		{
			iChangedH = 23;
		}
		cout << iChangedH << " " << iChangedM;
	}
	else
	{
		cout << iH << " " << iChangedM;
	}

	return 0;
}