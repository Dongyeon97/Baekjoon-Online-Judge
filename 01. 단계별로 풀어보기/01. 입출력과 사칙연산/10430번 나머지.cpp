/*
* @title    : 10430번 나머지
* @content  : 입출력과 사칙연산
* @author   : 박동연
* @date     : 230528
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// (A + B) % C는((A% C) + (B % C)) % C 와 같을까 ?
// (A×B) % C는((A % C) ×(B % C)) % C 와 같을까 ?
// 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

#include <iostream>

using namespace std;

int main()
{
	int A(0), B(0), C(0);
	cin >> A >> B >> C;

	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;


	return 0;
}