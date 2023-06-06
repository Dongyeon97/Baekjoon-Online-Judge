/*
* @title    : 11718번 그대로 출력하기
* @content  : 문자열
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2024KB
* @state    : 완료
*/

// 입력이 주어진다. 입력은 최대 100줄로 이루어져 있고,
// 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 각 줄은 100글자를 넘지 않으며,
// 빈 줄은 주어지지 않는다. 또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sStr;
	string sResult;

	while (getline(cin, sStr))
	{
		sResult += sStr;
		sResult += '\n';
	}

	cout << sResult;

	return 0;
}