/*
* @title    : 10798번 세로읽기
* @content  : 2차원 배열
* @author   : 박동연
* @date     : 230606
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	wchar_t wcArr[5][16] = {};

	string sStr;
	string sResult;

	for (int i = 0; i < 5; ++i)
	{
		cin >> sStr;
		for (int j = 0; '\0' != sStr[j]; ++j)
		{
			wcArr[i][j] = sStr[j];
		}
	}

	for (int j = 0; j < 15; ++j)
	{
		for (int i = 0; i < 5; ++i)
		{
			if('\0' != wcArr[i][j] && NULL != wcArr[i][j])
				sResult += wcArr[i][j];
		}
	}

	cout << sResult;

	return 0;
}