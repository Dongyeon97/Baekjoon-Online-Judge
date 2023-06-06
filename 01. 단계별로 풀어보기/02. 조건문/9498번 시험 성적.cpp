/*
* @title    : 9498번 시험 성적
* @content  : 조건문
* @author   : 박동연
* @date     : 230528
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
// 첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

#include <iostream>

using namespace std;

int main()
{
	int iScore(0);

	cin >> iScore;

	switch (iScore / 10)
	{
	case 10:
	case 9:
		cout << 'A';
		break;
	case 8:
		cout << 'B';
		break;
	case 7:
		cout << 'C';
		break;
	case 6:
		cout << 'D';
		break;
	default:
		cout << 'F';
		break;
	}

	return 0;
}