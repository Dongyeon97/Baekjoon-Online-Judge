/*
* @title    : 1157번 단어 공부
* @content  : 심화1
* @author   : 박동연
* @date     : 230605
* @time     : 40ms
* @memory   : 4916KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

// 91보다 작은 경우 (대문자)
// 91보다 큰 경우 (소문자)

int main()
{
	string sStr;					// 입력
	int iArr[26] = {};	// a~z
	int iMax = 0;					// 가장 많이나온 알파벳의 개수
	int iMaxNum = 0;				// 가장 많이나온 알파벳의 인덱스
	int iDup = 0;					// 가장 많이나온 알파벳이 여러개인 경우 체크

	cin >> sStr;

	for (int i = 0; i < sStr.length(); ++i)
	{
		// 대문자
		if (91 > sStr[i])
		{
			++iArr[sStr[i] - 65];
		}
		// 소문자
		else
		{
			++iArr[sStr[i] - 97];
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		if (iArr[i] > iMax)
		{
			iMax = iArr[i];
			iMaxNum = i;
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		if (iArr[i] == iMax)
		++iDup;
	}

	if (iDup > 1)
	{
		cout << "?";
		return 0;
	}

	cout << (char)(65 + iMaxNum);

	return 0;
}