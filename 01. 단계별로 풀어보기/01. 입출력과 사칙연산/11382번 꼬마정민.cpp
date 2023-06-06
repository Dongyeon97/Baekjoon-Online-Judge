/*
* @title    : 11382번 꼬마정민
* @content  : 입출력과 사칙연산
* @author   : 박동연
* @date     : 230528
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// 꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다!

#include <iostream>

using namespace std;

int main()
{
	long long A(0), B(0), C(0);

	cin >> A >> B >> C;
	cout << (A + B) + C << endl;

	return 0;
}