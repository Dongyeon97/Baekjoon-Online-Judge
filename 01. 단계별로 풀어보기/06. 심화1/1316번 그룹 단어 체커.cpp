/*
* @title    : 1316번 그룹 단어 체커
* @content  : 심화1
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2024KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int iInputN = 0;
	int iCount = 0;
	int iArr[26] = {};
	bool bCheck = false;

	string sStr;

	cin >> iInputN;

	for (int i = 0; i < iInputN; ++i)
	{
		bCheck = false;
		cin >> sStr;
		for (int k = 0; k < 26; ++k)
		{
			iArr[k] = 0;
		}
		++iArr[sStr[0] - 97];
		
		for (int j = 1; j < sStr.length(); ++j)
		{
			if (sStr[j] == sStr[j - 1])
				continue;
			else if(true == iArr[sStr[j] - 97])
			{
				bCheck = true;
				break;
			}
			++iArr[sStr[j] - 97];
		}
		if (!bCheck)
			++iCount;
	}

	cout << iCount;

	return 0;
}