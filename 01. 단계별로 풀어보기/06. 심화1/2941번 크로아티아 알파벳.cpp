/*
* @title    : 2941번 크로아티아 알파벳
* @content  : 심화1
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string sStr;
	int iCount = 0;

	cin >> sStr;

	for (int i = 0; i < sStr.length(); ++i)
	{
		++iCount;
		if ('c' == sStr[i])
		{
			if ('-' == sStr[i + 1])
			{
				++i;
				continue;
			}
			else if ('=' == sStr[i + 1])
			{
				++i;
				continue;
			}
		}

		else if ('d' == sStr[i])
		{
			if ('z' == sStr[i + 1])
			{
				if ('=' == sStr[i + 2])
				{
					i += 2;
					continue;
				}
			}
			else if ('-' == sStr[i + 1])
			{
				++i;
				continue;
			}
		}

		else if ('l' == sStr[i])
		{
			if ('j' == sStr[i + 1])
			{
				++i;
				continue;
			}
		}

		else if ('l' == sStr[i])
		{
			if ('j' == sStr[i + 1])
			{
				++i;
				continue;
			}
		}

		else if ('n' == sStr[i])
		{
			if ('j' == sStr[i + 1])
			{
				++i;
				continue;
			}
		}

		else if ('s' == sStr[i])
		{
			if ('=' == sStr[i + 1])
			{
				++i;
				continue;
			}
		}

		else if ('z' == sStr[i])
		{
			if ('=' == sStr[i + 1])
			{
				++i;
				continue;
			}
		}
	}

	cout << iCount;

	return 0;
}