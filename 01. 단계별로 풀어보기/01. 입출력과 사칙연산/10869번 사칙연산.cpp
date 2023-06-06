/*
* @title    : 10869번 사칙연산
* @content  : 입출력과 사칙연산
* @author   : 박동연
* @date     : 230526
* @time     : 0ms
* @memory   : 2020KB
* @state    : 진행중
*/

// 두 자연수 A와 B가 주어진다.
// 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 

#include <iostream>

using namespace std;

int main()
{
	double A = 0, B = 0;

	cin >> A >> B;
	
	cout << int(A + B) << endl;
	cout << int(A - B) << endl;
	cout << int(A) * int(B) << endl;
	cout << int(A) / int(B) << endl;
	cout << int(A) % int(B) << endl;

	return 0;
}