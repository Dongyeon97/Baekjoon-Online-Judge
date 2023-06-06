/*
* @title    : 2675번 문자열 반복
* @content  : 문자열
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
	int iT = 0;
	int iR = 0;
	string tS = {};
	string tP = {};

	cin >> iT;

	for (int i = 0; i < iT; ++i)
	{
		cin >> iR >> tS;
		for (int j = 0; j < tS.size(); ++j)
		{
			for (int k = 0; k < iR; ++k)
			{
				cout << tS[j];
			}
		}
		cout << "\n";
	}


	return 0;
}