/*
* @title    : 2738번 행렬 덧셈
* @content  : 2차원 배열
* @author   : 박동연
* @date     : 230606
* @time     : 4ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int iArrA[100][100];
	int iArrB[100][100];

	int iN = 0;
	int iM = 0;

	cin >> iN >> iM;

	for (int i = 0; i < iN; ++i)
	{
		for (int j = 0; j < iM; ++j)
		{
			cin >> iArrA[i][j];
		}
	}

	for (int i = 0; i < iN; ++i)
	{
		for (int j = 0; j < iM; ++j)
		{
			cin >> iArrB[i][j];
		}
	}

	for (int i = 0; i < iN; ++i)
	{
		for (int j = 0; j < iM; ++j)
		{
			cout << iArrA[i][j] + iArrB[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}