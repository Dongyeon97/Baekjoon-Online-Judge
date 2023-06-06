/*
* @title    : 5597번 과제 안내신분
* @content  : 1차원 배열
* @author   : 박동연
* @date     : 230601
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	bool bCheck[31] = {  };
	int iTemp = 0;


	for (int i = 1; i <= 28; ++i)
	{
		cin >> iTemp;
		bCheck[iTemp] = 1;
	}

	for (int j = 1; j <= 30; ++j)
	{
		if (0 == bCheck[j])
			cout << j << " ";
	}



	return 0;
}