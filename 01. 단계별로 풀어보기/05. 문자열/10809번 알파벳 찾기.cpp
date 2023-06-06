/*
* @title    : 10809번 알파벳 찾기
* @content  : 문자열
* @author   : 박동연
* @date     : 230602
* @time     : 0ms
* @memory   : 2024KB
* @state    : 완료
*/

// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 
// 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 
// 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int iArr[26];				// a ~ z까지 차례대로 저장되어 있음
	for (int i = 0; i < 26; ++i)
	{
		iArr[i] = 97 + i;
	}

	int iResult[26];			// -1로 초기화
	for (int i = 0; i < 26; ++i)
	{
		iResult[i] = -1;
	}

	string str;
	cin >> str;

	string::iterator iter = str.begin();

	for (iter; iter != str.end(); ++iter)
	{
		for (int i = 0; i < 26; ++i)
		{
			if (*iter == iArr[i] && -1 == iResult[i])
			{
				iResult[i] = iter - str.begin();
			}
			else if (*iter == iArr[i] && -1 != iResult[i])
			{
				break;
			}
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << iResult[i] << " ";
	}

	return 0;
}