/*
* @title    : 2745번 진법 변환
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230627
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int GetLength(char* _pStr)
{
	int iNum = 0;
	while (_pStr[iNum])
		++iNum;

	return iNum;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int				B;			
	char			N[32];		
	int				iResult(0);

	vector<char> vec;

	cin >> N >> B;

	for (int i = 0; i < GetLength(N); ++i)
	{
		vec.push_back(N[i]);
	}

	vector<char>::iterator vecIter = vec.begin();

	for (int i = 0; i < GetLength(N); ++i)
	{
		if (65 <= vec[i])
		{
			iResult += (int)(vec[i] - 55) * (pow(B, vec.size() - i - 1));
		}
		else
		{
			iResult += (int)(vec[i] - 48) * (pow(B, vec.size() - i - 1));
		}
	}

	cout << iResult;

	return 0;
}