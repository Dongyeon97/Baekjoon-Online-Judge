/*
* @title    : 1008번 A/B
* @content  : 입출력과 사칙연산
* @author   : 박동연
* @date     : 230526
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

#include <iostream>

using namespace std;

// std::fixed				-> 소수점 아래로 고정
// std::cout.precision(n)	-> 실수 전체 자리수 중 n자리 까지 표현

int main()
{
	double A = 0, B = 0;

	cin >> A >> B;

	cout.precision(12);
	cout.fixed;

	cout << A / B << endl;

	return 0;
}